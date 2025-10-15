#include <iostream>
using namespace std;


void inputWorkerData(double &hours, double &payment, int num) 
{  
    cout << "Hours for worker " << num;
    cin >> hours;

    cout << "Payment for worker " << num;
    cin >> payment;
}

double calculateWorkerData (double hours, double payment)
{
    double sum = hours * payment;
    return sum;
}



int main ()
{
    double hours1, hours2, payment1, payment2, sum1, sum2;

    inputWorkerData(hours1, payment1, 1);
    inputWorkerData(hours2, payment2, 2);

    sum1 = calculateWorkerData(hours1, payment1);
    sum2 = calculateWorkerData(hours1, payment2);

    if (sum1 > sum2){
        cout << "Worker 1 earned more\n";
    } else if (sum1 < sum2) {
        cout << "Worker 2 earned more\n";
    } else {
        cout << "Workers earned the same\n";
    }
    cout << "Workers 1 and 2 earned " << sum1+sum2;

    return 0;
}