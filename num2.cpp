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

int main()
{
    float hoursWorked, hourlyPayment, premiumPercentage;

    cout << "Hours work: ";
    cin >> hoursWorked;

    cout << "Hour payment: ";
    cin >> hourlyPayment;

    cout << "Percent of premium: "; 
    cin >> premiumPercentage;

    float totalSum = getTotalSum(hoursWorked, hourlyPayment, premiumPercentage);
    float incomeTax = getIncomeTax(totalSum);
    float realSalary = getRealSalary(totalSum);
    
    cout << "earned: " << totalSum << endl;
    cout << "income tax: " << incomeTax << endl; 
    cout << "real salary: " << realSalary << endl;  

    return 0;
}