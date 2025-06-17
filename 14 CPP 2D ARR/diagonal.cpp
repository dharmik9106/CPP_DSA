#include <iostream>

using namespace std;

int main() 
{


      int arr[5][5]= {
        {10, 11, 12, 13, 14}, // i=0
        {15, 16, 17, 18, 19}, // i=1
        {20, 21, 22, 23, 24}, // i=2
        {25, 26, 27, 28, 29}, // i=3
        {30, 31, 32, 33, 34}  // i=4
    //j=  0   1   2   3   4
    };

    int r=5;
    int c=5;
        
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
        if (i==j || i+j==r-1)
        {
            cout << arr [i][j] << " ";

        }
        else {
            cout << " " << " ";


        }
        }
        cout << endl;

    }
    return 0;
    

}