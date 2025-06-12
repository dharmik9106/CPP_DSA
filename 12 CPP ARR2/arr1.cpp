#include<iostream>
using namespace std;
int main() {
    int size;
    int avg;
    int sum = 0;
    cout << "size:";
    cin >> size;

    int arr[size];

    for (int i=0; i<size; i++){

        cout << "arr["<< i << "]:";
        cin >> arr[i];

    }

    for(int i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }


    avg =sum/size;

    cout << "avg: " << avg << endl;

    return 0;

}

    