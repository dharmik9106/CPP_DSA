#include<iostream>
#include<stdio.h>


using namespace std;


void sum(int a, int b){

    int sum = a + b;


    return ;

}


int main() {

    int arr[5];
    int c= 10;
    int d=30;

    int *p = &d;

    

    printf("%x", p);
    cout << endl;

    printf("%p", p);
    cout << endl;

    printf("%f", p);
    cout << endl;

   
    return 0;

}