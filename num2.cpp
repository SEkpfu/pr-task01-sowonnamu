#include <iostream>
using namespace std;

double getTotalSum(double hours, double payment, double premium)
{
    double earnedSum = hours * payment;
    double earnedSumWithPremium = earnedSum + (earnedSum * premium) / 100.0;

    return earnedSumWithPremium;
}

double getIncomeTax(double salary)
{
    double incomeTax = (salary * 13) / 100.0;
    return incomeTax;
}

double getRealSalary(double salary) 
{
    double incomeTax = getIncomeTax(salary);
    double realSalary = salary - incomeTax;

    return realSalary;
}

int main()
{
    double hoursWorked, hourlyPayment, premiumPercentage;

    cout << "Hours work: ";
    cin >> hoursWorked;

    cout << "Hour payment: ";
    cin >> hourlyPayment;

    cout << "Percent of premium: "; 
    cin >> premiumPercentage;

    double totalSum = getTotalSum(hoursWorked, hourlyPayment, premiumPercentage);
    double incomeTax = getIncomeTax(totalSum);
    double realSalary = getRealSalary(totalSum);
    
    cout << "earned: " << totalSum << endl;
    cout << "income tax: " << incomeTax << endl; 
    cout << "real salary: " << realSalary << endl;  

    return 0;
}