#include<iostream>


using namespace std;


int main() {

int arr[4] ={1,2,3,4};


int *d =arr;
int *d1 =&arr[0];

int *ptr[4];

    for(int  i=0; i<4; i++)
    {
        ptr[i]=&arr[i];

    }

    for (int i=0; i<4; i++){
        cout << ptr[i] << ": "<<*ptr[i] <<endl;
    }

    return 0;

}