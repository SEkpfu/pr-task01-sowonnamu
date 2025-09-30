#include <iostream>

int main ()
{
    using namespace std;

    float hoursWorked, hourlyPayment, premiumPercentage;

    cout << "Hours work: ";
    cin >> hoursWorked;

    cout << "Your hour payment: ";
    cin >> hourlyPayment;

    cout << "Persent of premium: ";
    cin >> premiumPercentage;

    float earnedSum = hoursWorked * hourlyPayment;
    float earnedSumWithPremium = earnedSum + (earnedSum * premiumPercentage)/100.0;
    
    cout << "You earned: " << earnedSumWithPremium;

    return 0;
}