#include <iostream>
using namespace std;


void inputWorkerData (double &hours, double &payment, int i)
{
    cout << "Hour worked" << i;
    cin >> hours;
    cout << "Hour payment" << i;
    cin >> payment;
}

double calcculateWorkerData (double hours, double payment)
{
    double sum = hours * payment;
    return sum;
}



int main ()
{
    double totalSum = 0.0;

    for (int i = 1; i <= 5; i++)
    {
        double hours, payment, sum;

        inputWorkerData(hours, payment, i);
        
        sum = calcculateWorkerData(hours, payment);
        totalSum += sum;

        cout << "Worker " << i << " earned " << sum << endl;
    }
    cout << "Salary medium of 5 workers: " << totalSum/5.0;

    return 0;
}