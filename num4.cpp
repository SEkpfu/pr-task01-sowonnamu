#include <iostream>
using namespace std;

void inputWorkerData (double &hoursWorked, double &hourlyPayment, double &premiumPercentage)
{
    cout << "Hours worked: ";
    cin >> hoursWorked;

    cout << "Hourly payment: ";
    cin >> hourlyPayment;

    cout << "Percent of premium: "; 
    cin >> premiumPercentage;
}

void calculateSalaryData(double hours, double payment, double premium, 
                        double &totalSum, double &incomeTax, double &realSalary)                                      
{
    totalSum = hours * payment + (hours*payment*premium)/100.0;
    incomeTax = totalSum * (13.0/100.0);
    realSalary = totalSum - incomeTax;
}

int main()
{
    double hoursWorked, hourlyPayment, premiumPercentage, totalSum, incomeTax, realSalary;
    inputWorkerData(hoursWorked, hourlyPayment, premiumPercentage);

    calculateSalaryData(
        hoursWorked, 
        hourlyPayment, 
        premiumPercentage, 
        totalSum, 
        incomeTax, 
        realSalary
    );
    
    cout << "earned: " << totalSum << endl;
    cout << "income tax: " << incomeTax << endl; 
    cout << "real salary: " << realSalary << endl;  

    return 0;
}