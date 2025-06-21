#include<iostream>

using namespace std;




void two_sum(){
  int r, c;
    cout << "r: ";
    cin >> r;
    cout << "c: ";
    cin >> c;

    int a[r][c];
    int b[r][c];
    int x[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "a["<<i<<"]["<<j<<"]: ";
            cin >> a[i][j];
        }
    }

     for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "b["<<i<<"]["<<j<<"]: ";
            cin >> b[i][j];
        }
    }
         for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                x[i][j] = a[i][j] + b[i][j];
                cout << x[i][j] << " ";
            }
            cout << endl;
        }

}


void boundry(){
    int n = 6;
    int arr[n][n] = {
                        {10, 11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20, 21},
                        {22, 23, 24, 25, 26, 27},
                        {28, 29, 30, 31, 32, 33},
                        {34, 35, 36, 37, 38, 39},
                        {40, 41, 42, 43, 44, 45} 
                    };
                  

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 || j==0 || j==n-1 || i==n-1)
            {
                cout << arr[i][j] << " "; 
            }
            else
            {
                cout << "  " << " "; 
            }
        }
        cout << endl;
    }
}



void diagonal(){
     int n = 5;
    int arr[n][n] = {
                        {10, 11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20, 21},
                        {22, 23, 24, 25, 26, 27},
                        {28, 29, 30, 31, 32, 33},
                        {34, 35, 36, 37, 38, 39},
                        {40, 41, 42, 43, 44, 45} 
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
}





void row_sum(){
    int n = 6;
    int row;
        int arr[n][n] = {
                        {10, 11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20, 21},
                        {22, 23, 24, 25, 26, 27},
                        {28, 29, 30, 31, 32, 33},
                        {34, 35, 36, 37, 38, 39},
                        {40, 41, 42, 43, 44, 45} 
                    };
         

                     

 cout << "Enter row: ";
 cin >>row;
 int sum =0;

 cout << "row" << row <<": ";
                    for(int i=0; i<n; i++)
                    {
                        for(int j=0; j<n;j++)
                        {
                            if(i == row){
                                sum += arr[i][j];
                                cout << arr[i][j] << " ";
                            }
                        }
                    }

        cout << endl << "row " << row << ": " << sum <<endl;

}

void col_sum(){
    int n = 6;
    int col;
        int arr[n][n] = {
                        {10, 11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20, 21},
                        {22, 23, 24, 25, 26, 27},
                        {28, 29, 30, 31, 32, 33},
                        {34, 35, 36, 37, 38, 39},
                        {40, 41, 42, 43, 44, 45} 
                    };
         

                     

 cout << "Enter col: ";
 cin >>col;
 int sum =0;

 cout << "col" << col <<": ";
                    for(int i=0; i<n; i++)
                    {
                        for(int j=0; j<n;j++)
                        {
                            if(i == col){
                                sum += arr[i][j];
                                cout << arr[i][j] << " ";
                            }
                        }
                    }

        cout << endl << "col " << col << ": " << sum <<endl;

}

int main(){
  
    two_sum();

    boundry();

    diagonal();

    row_sum();

    col_sum();

}
