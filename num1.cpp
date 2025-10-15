#include <iostream>

int main ()
{
    using namespace std;

    double hoursWorked, hourlyPayment, premiumPercentage;

    cout << "Hours work: ";
    cin >> hoursWorked;

    cout << "Hour payment: ";
    cin >> hourlyPayment;

    cout << "Persent of premium: ";
    cin >> premiumPercentage;

    double earnedSum = hoursWorked * hourlyPayment;
    double earnedSumWithPremium = earnedSum + (earnedSum * premiumPercentage)/100.0;
    
    cout << "You earned: " << earnedSumWithPremium;

    return 0;
}