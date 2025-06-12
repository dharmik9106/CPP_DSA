#include<iostream>
using namespace std;
int main() {
    
    int start_year;
    int end_year;
    int leap[100];
    int count =0;
    cout << "start_year: ";
    cin >> start_year;

    cout << "end_year: ";
    cin >> end_year;

    for (int i=start_year; i<=end_year; i++)
    {
        if(i % 4 == 0)
        {
            leap [count] = i;
            count++;
        }
    }
    cout << "[";
     for (int  i=0; i<count; i++)
     {
        cout << leap[i] << ",";
     }
    cout << "]";
    return 0;
}

    