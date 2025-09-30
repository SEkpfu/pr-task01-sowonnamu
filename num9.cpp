#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int min(double q[],int size){
    double x=9999999999999999;
    int index;
    for (int i=0;i<5;i++){
        if (q[i]<x){
            x=q[i];
            index=i;
        }
    }
    return index+1;
}

double max(double q[5],int size){
    double max=0;
       for (int i=0;i<5;i++){
        if (q[i]>max){
            max=q[i];
        }
    }
    return max;
}

double maxnumber(double q[],int size){
    double max=0;
    int NumMax;
    for (int i=0;i<5;i++){
        if (q[i]>max){
            max=q[i];
            NumMax=i;
        }
    }
    return NumMax+1;
}

int elem(double q[],int size,int num){
    int f=0;
    int count = sizeof(q) / sizeof(q[0]); 
    for (int k=0;k<count;k++){
        if (q[k]>num){
            f=f+1;
        }

    }
    return f;
}

int main(){
    return 0;
}
