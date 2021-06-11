dailyCharge = 350

def CalcStayCharge(stayLength):
    return int(dailyCharge) * int(stayLength)

def CalcMiscCharge(medCharge, surgeryCharge, labCharge, rehabCharge):
    return int(medCharge) + int(surgeryCharge) + int(labCharge) + int(rehabCharge)

def CalcTotalCharge(stayLength, medCharge, surgeryCharge, labCharge, rehabCharge):
    total = int(CalcStayCharge(stayLength)) + int(CalcMiscCharge(medCharge, surgeryCharge, labCharge, rehabCharge))
    return total

print("Enter information below")
print()
dayVal = input("Days spent in the hospital:")
medVal = input("Medical charges:")
surgeryVal = input("Surgical charges:")
labVal = input("Lab fees:")
rehabVal = input("Physical rehabilitation charges:")
print()
print()
stayTotal = CalcStayCharge(dayVal)
miscTotal = CalcMiscCharge(medVal, surgeryVal, labVal, rehabVal)
totalTotal = CalcTotalCharge(dayVal, medVal, surgeryVal, labVal, rehabVal)
print("Stay charges: " + str(stayTotal))
print("Misc charges: " + str(miscTotal))
print("Total charges: " + str(totalTotal))