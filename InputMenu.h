
#ifndef  AIRGEAD_INPUT_MENU_H_
#define  AIRGEAD_INPUT_MENU_H_

#include <iostream>
#include <string>
#include "Monthly.h"

using namespace std;

void InputMenu() {
    //	MENU WITH OPTIONS FOR USER TO INPUT

    double initial;
    double month;
    double interest;
    int years;

    Monthly input1;
    MonthlyWithDeposit input2;

    cout << "****************************************" << endl;
    cout << "************** Data Input **************" << endl << endl;
    cout << "Press any key to continue... " << endl << endl;

    cout << "Initial Investment Amount: ";
    while (!(cin >> initial)) { // Validation
    cout << "Error: Please enter a number" << endl;
    cout << "Initial Investment Amount: ";
    cin.clear();
    cin.ignore(100, '\n');
}
    cout << "Monthly Deposit: " ;
    while (!(cin >> month)) { // Validation
        cout << "Error: Please enter a number" << endl;
        cout << "Monthly Deposit: " ;
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << "Annual Interest: ";
    while (!(cin >> interest)) { // Validation
        cout << "Error: Please enter a number" << endl;
        cout << "Annual Interest: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << "Number of Years: ";
    while (!(cin >> years)) { // Validation
        cout << "Error: Please enter a number" << endl;
        cout << "Number of Years: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
cout << endl << endl << endl;


    input1.CalculateWithNoDeposit(initial, interest, years);      //Pass input to function (no monthly deposit)
    input2.CalculateWithDeposit(initial, month, interest, years); //Pass input to function (monthly deposit)




    //AFTER RECEIVING INPUT, CALCULATE INTEREST FUNCTION WILL BE CALLED

}


#endif // AIRGEAD_INPUT_MENU_H_