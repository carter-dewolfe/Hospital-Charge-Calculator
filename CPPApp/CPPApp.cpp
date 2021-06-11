#include <iostream>
#include <string>

using namespace std;
int dailyCharge = 350;

double CalcStayCharge(int stayLength)
{
    return dailyCharge * stayLength;
}

double CalcMiscCharge(double medCharge, double surgeryCharge, double labCharge, double rehabCharge)
{
    return medCharge + surgeryCharge + labCharge + rehabCharge;
}

double CalcTotalCharge(int stayLength, double medCharge, double surgeryCharge, double labCharge, double rehabCharge)
{
    double total = CalcStayCharge(stayLength) + CalcMiscCharge(medCharge, surgeryCharge, labCharge, rehabCharge);
        return total;
}


int main()
{
    int dayVal;
    double medVal;
    double surgeryVal;
    double labVal;
    double rehabVal;
    cout << "Enter information below";
    cout << "\n";
    cout << "Days spent in the hospital:";
    cin >> dayVal;
    cout << "Medical charges:";
    cin >> medVal;
    cout << "Surgical charges:";
    cin >> surgeryVal;
    cout << "Lab fees:";
    cin >> labVal;
    cout << "Physical rehabilitation charges:";
    cin >> rehabVal;
    cout << "\n";
    cout << "\n";
    double stayTotal = CalcStayCharge(dayVal);
    double miscTotal = CalcMiscCharge(medVal, surgeryVal, labVal, rehabVal);
    double totalTotal = CalcTotalCharge(dayVal, medVal, surgeryVal, labVal, rehabVal);
    cout << "Stay charges: " + to_string(stayTotal) + "\n";
    cout << "Misc charges: " + to_string(miscTotal) + "\n";
    cout << "Total charges: " + to_string(totalTotal) + "\n";
}

