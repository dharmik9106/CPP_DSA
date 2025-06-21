#include<iostream>
using namespace std;

int main(){

    int r, c;
    cout << "r: ";
    cin >> r;
    cout << "c: ";
    cin >> c;

    char arr[r][c];

            
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cout << "arr["<<i<<"]["<<j<<"]: ";
                cin >> arr[i][j];
                 cout << endl;
            }
        }


        arr[0][0] = 'A';

                    for(int i=0; i<r; i++)
                    {
                        for(int j=0; j<c; j++)
                        {
                            cout << arr[i][j] << " " ;
                        }
                   cout << endl;
                    }
    return 0;
}