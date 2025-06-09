#include<iostream>
using namespace std;


int main(){

    for(int d=1; d<=5; d++) 
    {

        for(int k=1; k<=d; k++)
        {
            cout << k << " ";
        }

        for(int l=d; l<5; l++)
        {
            cout << "  " << "  ";
        }

        for(int j=1; j<=d; j++)
        {
            cout << j << " ";
        }

        cout << endl;

       
    }

    return 0;
}