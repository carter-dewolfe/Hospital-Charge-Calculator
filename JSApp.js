
var dailyCharge = 350;

function CalcStayCharge(stayLength) {
    return dailyCharge * stayLength
}
function CalcMiscCharge(medCharge, surgeryCharge, labCharge, rehabCharge) {
    return medCharge + surgeryCharge + labCharge + rehabCharge
}
function CalcTotalCharge(stayLength, medCharge, surgeryCharge, labCharge, rehabCharge) {
    return CalcStayCharge(stayLength) + CalcMiscCharge(medCharge, surgeryCharge, labCharge, rehabCharge)
}

function MyFunction() {

    var _daysSpent = parseInt(document.getElementById("daysSpent").value);
    var _medCharges = parseInt(document.getElementById("medCharges").value);
    var _surgeryCharges = parseInt(document.getElementById("surgeryCharges").value);
    var _labCharges = parseInt(document.getElementById("labCharges").value);
    var _rehabCharges = parseInt(document.getElementById("rehabCharges").value);

    stayTotal = CalcStayCharge(_daysSpent);
    miscTotal = CalcMiscCharge(_medCharges, _surgeryCharges, _labCharges, _rehabCharges);
    totalTotal = CalcTotalCharge(_daysSpent, _medCharges, _surgeryCharges, _labCharges, _rehabCharges);

    document.getElementById("stayCharge").innerHTML = stayTotal;
    document.getElementById("miscCharge").innerHTML = miscTotal;
    document.getElementById("totalCharge").innerHTML = totalTotal;

}
