#include <iostream>
using namespace std;

double TotalSum(double hours, double payment, double premium)
{
    double earnedSum = hours * payment;
    double earnedSumWithPremium = earnedSum + (earnedSum * premium) / 100.0;

    return earnedSumWithPremium;
}

double IncomeTax(double salary)
{
    double incomeTax = (salary * 13) / 100.0;
    return incomeTax;
}

double RealSalary(double salary) 
{
    double incomeTax = IncomeTax(salary);
    double realSalary = salary - incomeTax;

    return realSalary;
}

void inputWorkerData (double &hoursWorked, double &hourlyPayment, double &premiumPercentage)
{
    cout << "Hour work: ";
    cin >> hoursWorked;

    cout << "Hourly payment: ";
    cin >> hourlyPayment;

    cout << "Percent of premium: "; 
    cin >> premiumPercentage;
}

int main()
{
    double hoursWorked, hourlyPayment, premiumPercentage;
    inputWorkerData(hoursWorked, hourlyPayment, premiumPercentage);

    double totalSum = TotalSum(hoursWorked, hourlyPayment, premiumPercentage);
    double incomeTax = IncomeTax(totalSum);
    double realSalary = RealSalary(totalSum);
    
    cout << "Earned: " << totalSum << endl;
    cout << "Income tax: " << incomeTax << endl; 
    cout << "Real salary: " << realSalary << endl;  

    return 0;
}