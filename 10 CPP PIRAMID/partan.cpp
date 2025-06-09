#include<iostream>
using namespace std;


 int main(){

    for(int i=5; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }


    cout  << "--------------------------------" << endl;


    for(int i=5; i>=1; i--) // 4 / 3
        {

            for(int k=i; k<5; k++)
            {
                cout << " " << " ";
            }

            for(int j=1; j<=i; j++)
            {
                cout << "*" << " ";
            }
            cout << endl;
        }


    cout  << "--------------------------------" << endl;


    for(int i=5; i>=1; i--) // 4 / 3
        {

              for(int j=1; j<=i; j++)
            {
                cout << i << " ";
            }

            for(int k=i; k<5; k++)
            {
                cout << "  " << "  ";
            }

            for(int j=1; j<=i; j++)
            {
                cout << i << " ";
            }
            cout << endl;
        }


    cout  << "--------------------------------" << endl;


    for(int i=5; i>=1; i--) // 4 / 3
        {

            for(int j=1; j<=i; j++)
            {
                cout << j << " ";
            }

            for(int k=i; k<5; k++)
            {
                cout << "  " << "  ";
            }

            for(int j=i; j>=1; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }



    return 0;
 }