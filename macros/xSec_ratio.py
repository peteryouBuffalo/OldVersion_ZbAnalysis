import json
from math import *

#== error ratio method ========================================================
def err_ratio(ratio, v1, err1, v2, err2):
	return ratio*sqrt((err1/v1)**2 + (err2/v2)**2)
	
def err_ratio_cov(ratio, v1, err1, v2, err2, cov):
	err_AB = cov*err1*err2
	return ratio*sqrt((err1/v1)**2 + (err2/v2)**2 - 2*err_AB/(v1*v2))

#== load the data from the proper files =======================================
f1 = open('Z1b_data.json',)
z1b_data = json.load(f1)
f1.close()

f2 = open('Z2b_data.json',)
z2b_data = json.load(f2)
f2.close()

#== run the calculations we want ==============================================

channels = ["Electron", "Muon", "Combined"]
for i in range(len(channels)):
	
	# get the proper channel and the cross sections for each 
	ch = channels[i]
	xSec1 = z1b_data[ch][0]
	xSec2 = z2b_data[ch][0]
	ratio = xSec2/xSec1
	
	# we have to go through each error type separately
	# first, calculate the statistical unc. (completely independent)
	err1_stat = z1b_data[ch][1]
	err2_stat = z2b_data[ch][1]
	errRat_stat = err_ratio(ratio, xSec1, err1_stat, xSec2, err2_stat)
	
	# second, calculate the systematic unc. (not sure?)
	err1_syst = z1b_data[ch][2]
	err2_syst = z2b_data[ch][2]
	errRat_syst = err_ratio(ratio, xSec1, err1_syst, xSec2, err2_syst)
	errRat_syst_wCov = err_ratio_cov(ratio, xSec1, err1_syst, xSec2, err2_syst, 1)
	errRat_syst_neg = err_ratio_cov(ratio, xSec1, err1_syst, xSec2, err2_syst, -1)

	# third, calculate the theoretical unc. (do correlated and not)
	err1_theo = z1b_data[ch][3]
	err2_theo = z2b_data[ch][3]
	errRat_theo = err_ratio(ratio, xSec1, err1_theo, xSec2, err2_theo)
	errRat_theo_wCov = err_ratio_cov(ratio, xSec1, err1_theo, xSec2, err2_theo, 1)
	errRat_theo_neg = err_ratio_cov(ratio, xSec1, err1_theo, xSec2, err2_theo, -1)
	
	# now, get the JES uncertainty
	err1_jes = z1b_data[ch][4]*xSec1
	err2_jes = z2b_data[ch][4]*xSec2
	errRat_jes = err_ratio_cov(ratio, xSec1, err1_jes, xSec2, err2_jes, 1)
	errRat_jes_neg = err_ratio_cov(ratio, xSec1, err1_jes, xSec2, err2_jes, -1)
	
	# now, get the JER uncertainty
	err1_jer = z1b_data[ch][5]*xSec1
	err2_jer = z2b_data[ch][5]*xSec2
	errRat_jer = err_ratio_cov(ratio, xSec1, err1_jer, xSec2, err2_jer, 1)
	errRat_jer_neg = err_ratio_cov(ratio, xSec1, err1_jer, xSec2, err2_jer, -1)
	
	# print the output
	print("----------------------------------------------------------------------------")
	print(ch, " Channel\n----------------------------------------------------------------------------")
	print("xSec(Z+1b) = ", xSec1, " +/- ", err1_stat, "(stat) +/- ", err1_syst, "(syst) +/- ", err1_theo, " (theo) pb")
	print("xSec(Z+2b) = ", xSec2, " +/- ", err2_stat, "(stat) +/- ", err2_syst, "(syst) +/- ", err2_theo, " (theo) pb")
	print("JES, JER Unc.")
	print("\t> Z+1b : ", err1_jes, ", ", err1_jer, " pb")
	print("\t> Z+2b : ", err2_jes, ", ", err2_jer, " pb")
	print("")
	print("xSec(Z+2b)/xSec(Z+1b) = ", '%s' % float('%.3g' % ratio), "\n")
	print("statistical unc.  = ", '%s' % float('%.3g' % errRat_stat))
	print("systematic unc.   = ", '%s' % float('%.3g' % errRat_syst), " (0% correlation)")
	print("                    ", '%s' % float('%.3g' % errRat_syst_wCov), " (+100% correlation)")
	print("                    ", '%s' % float('%.3g' % errRat_syst_neg), " (-100% correlation)\n")
	
	print("theoretical unc.  = ", '%s' % float('%.3g' % errRat_theo), " (0% correlation)")
	print("                    ", '%s' % float('%.3g' % errRat_theo_wCov), " (+100% correlation)")
	print("                    ", '%s' % float('%.3g' % errRat_theo_neg), " (-100% correlation)\n")
	
	print("JES unc.          = ", '%s' % float('%.3g' % errRat_jes), "(+100% correlation)")
	print("                    ", '%s' % float('%.3g' % errRat_jes_neg), " (-100% correlation)\n")
	
	print("JER unc.          = ", '%s' % float('%.3g' % errRat_jer), "(+100% correlation)")
	print("                    ", '%s' % float('%.3g' % errRat_jer_neg), " (-100% correlation)\n")
