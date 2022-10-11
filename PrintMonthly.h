
#ifndef AIRGEAD_PRINT_MONTHLY_H_
#define AIRGEAD_PRINT_MONTHLY_H_

#include <iostream>
#include <string>
#include <iomanip>

#include "Monthly.h"
#include "InputMenu.h"

using namespace std;

void PrintMonthly(vector<double> t_yearEndBal, vector <double> t_yearEndInt, int t_years, bool with) {
    int numOfYears = t_years;
    vector<double> yearEndBal = t_yearEndBal;
    vector<double> yearEndInt = t_yearEndInt;

    if(with) {
        cout << "    Balance and Interest With Additional Monthly Deposits    " << endl;
    } else {
        cout << "    Balance and Interest Without Additional Monthly Deposits    " << endl;
    }

    cout << "================================================================" << endl;
    cout << "Year           Year End Balance     Year End Earned Interest   " << endl;
    cout << "_______________________________________________________________" << endl;
    cout << endl;
    for (int i = 0; i < numOfYears; ++i) {
        cout << setprecision(-1) << i + 1 << "                 " ;
        cout << yearEndBal.at(i);
        cout << "                       " << yearEndInt.at(i) << endl;
    }
    cout << "================================================================" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "================================================================" << endl << endl << endl;
}

#endif // AIRGEAD_PRINT_MONTHLY_H_