#include <iostream>
using namespace std;

float getTotalSum(float hours, float payment, float premium)
{
    float earnedSum = hours * payment;
    float earnedSumWithPremium = earnedSum + (earnedSum * premium) / 100.0;

    return earnedSumWithPremium;
}

float getIncomeTax(float salary)
{
    float incomeTax = (salary * 13) / 100.0;
    return incomeTax;
}

float getRealSalary(float salary) 
{
    float incomeTax = getIncomeTax(salary);
    float realSalary = salary - incomeTax;

    return realSalary;
}

void inputWorkerData (float &hoursWorked, float &hourlyPayment, float &premiumPercentage)
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
    float hoursWorked, hourlyPayment, premiumPercentage;
    inputWorkerData(hoursWorked, hourlyPayment, premiumPercentage);

    float totalSum = getTotalSum(hoursWorked, hourlyPayment, premiumPercentage);
    float incomeTax = getIncomeTax(totalSum);
    float realSalary = getRealSalary(totalSum);
    
    cout << "Earned: " << totalSum << endl;
    cout << "Income tax: " << incomeTax << endl; 
    cout << "Real salary: " << realSalary << endl;  

    return 0;
}