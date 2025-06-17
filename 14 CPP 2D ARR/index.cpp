#include <iostream>

using namespace std;

int main() {

    int r, c;
    
    cout << "rows: ";
    cin>> r;

    cout << "cols: ";
    cin>> c;

    int arr[r][c];


    for (int i=0; i<r; i++){

        for (int j=0; j<c; j++)
        {
            cout << "arr [" << i<< "]"<<"[" << j <<"]";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    arr [1][1] = 0;


    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++)
        {
            cout << arr [i][j] << " ";


        }

        cout << endl;

    }
}