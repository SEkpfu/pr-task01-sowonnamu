#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main(){
    int p[3][4];
    int v[3][4];
    int t[3][4];
    int massive[3][4][2];
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            int incomeTax;
            cout <<"Введите данные для "<<j+1<<" работника в "<<i+1<<" месяце";
            cin >>p[i][j]>>v[i][j];
            t[i][j]=p[i][j]*v[i][j];
            incomeTax = t[i][j]*0.13;
            massive[i][j][0]=incomeTax;
            massive[i][j][1]=t[i][j];
        }
    }
    cout <<massive[1][0][1]-massive[1][0][0]<<endl;
    int w=0;
    int num;
    int zarp=0;
    for (int k=0;k<3;k++){
        w=w+massive[k][2][0];
    }
    cout <<w<<endl;
    for (int i=1;i<4;i++){
        if (massive[2][i][1]>zarp){
            zarp=massive[2][i][1];
            num=i;
        }
    }
    cout <<num<<endl;
    int sum=0;
    for (int c=0;c<3;c++){
        for (int n=0;n<4;n++){
            sum=sum+massive[c][n][1];
        }
    }
    cout <<sum;

    return 0;
}
