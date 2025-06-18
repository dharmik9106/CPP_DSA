#include<iostream>
using namespace std;


// TASRN -  TAKE SOMETHING RETURN NOTHING

void sumArray(int arr[])
{
    int sum = 0;
    for(int i=0; i<5; i++)
    {
        sum += arr[i]; 
    }

    cout << "sum: " << sum <<endl;
}


void evenEle(int arr[])
{
    cout << "Even no: ";

    for(int i=0; i<5; i++)
    {
        if(arr[i] % 2 ==0)
        {
            cout << arr[i] << ", ";
        }
    }

    cout << endl;
}

void factorial(int arr[])
{
    int fact = 1;
    for(int i=0; i<5; i++)
    {

        fact *= arr[i];
    }

    cout << "factorial: "<< fact <<endl;
}

void cubes(int arr[])
{
    cout << "cubes: ";
    for(int i=0; i<5; i++)
    {
        cout << arr[i]*arr[i]*arr[i] << ", ";
    }
    cout << endl;
}




int main(){

     int arr[5] = {1, 2, 3, 4, 5};

    sumArray(arr);

    evenEle(arr);

    factorial(arr);

    cubes(arr);

    return 0;
}