
#ifndef AIRGEAD_MONTHLY_H_
#define AIRGEAD_MONTHLY_H_

#include <iostream>
#include <string>
#include <vector>

#include "PrintMonthly.h"

using namespace std;


class Monthly {

public:
    //Method to calculate yearly balance w/o a deposit Declaration
	void CalculateWithNoDeposit(double t_initialInvestment, double t_interestRate, int t_numberOfYears);

private:
	double initialInvestment;
	double interestRate;
	int numOfYears;
	double endOfYearBalance = 0.0;
	double yearEndInterestEarned;
	vector <double> yearEnd;
	vector <double> intEarned;

};

//Method to calculate yearly balance w/o a deposit Definition

void Monthly::CalculateWithNoDeposit(double t_initialInvestment, double t_interestRate, int t_numberOfYears) {
	this->initialInvestment = t_initialInvestment;
	this->interestRate = t_interestRate / 100.0;
	this->numOfYears = t_numberOfYears;

    double current; // holds balance for each iteration of the loop
    yearEndInterestEarned = initialInvestment + (initialInvestment * interestRate);
	//Loops based on numOfYears and calculates interest w/o a monthly deposit
	for (unsigned int i = 1; i <= numOfYears; ++i) {

        endOfYearBalance = endOfYearBalance + yearEndInterestEarned;
        yearEndInterestEarned = endOfYearBalance * interestRate;
		yearEnd.push_back(endOfYearBalance); //Adds to vector
		intEarned.push_back(yearEndInterestEarned); //Adds to vector

	}
	PrintMonthly(yearEnd, intEarned, numOfYears, false); //Sends the vector to be printed
}

class MonthlyWithDeposit {

public:
    //Method to calculate yearly balance with a deposit Declaration
	void CalculateWithDeposit(double t_initialInvestment, double t_monthlyDeposit, double t_interestRate, int t_numberOfYears);

private:
	double initialInvestment;
	double interestRate;
	int numOfYears;
	double monthlyDeposit;
	double endOfYearBalance = 0.0;
	double yearEndInterestEarned;
	vector <double> yearEnd;
	vector <double> intEarned;

};

//Method to calculate yearly balance with a deposit Definition

void MonthlyWithDeposit::CalculateWithDeposit(double t_initialInvestment, double t_monthlyDeposit, double t_interestRate, int t_numberOfYears) {
	this->initialInvestment = t_initialInvestment;
	this->interestRate = t_interestRate / 100.0;
	this->numOfYears = t_numberOfYears;
	this->monthlyDeposit = t_monthlyDeposit;

    double current; //Holds balance for each iteration of the loop
    double end;
    endOfYearBalance = (initialInvestment + (monthlyDeposit * 12));
    end = (initialInvestment + (monthlyDeposit * 12)) * interestRate;


    //Loops based on numOfYears and calculates interest with a monthly deposit
	for (unsigned int i = 1; i <= numOfYears; ++i) {

        endOfYearBalance = endOfYearBalance + (endOfYearBalance * interestRate);
        yearEndInterestEarned = endOfYearBalance * interestRate;
		yearEnd.push_back(endOfYearBalance);
		intEarned.push_back(yearEndInterestEarned);

	}
	PrintMonthly(yearEnd, intEarned, numOfYears, true); //Sends the vector to be printed
 }


#endif // AIRGEAD_MONTHLY_H_