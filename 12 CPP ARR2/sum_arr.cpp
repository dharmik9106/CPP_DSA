#include <iostream>
using namespace std;

    int main(){
        int size;
         cout <<"size: ";
         cin >>size;


         int a[size];
         int b[size];
         int c[size];

         for (int i=0; i<size; i++)
         {
            cout <<"a["<< i <<"]:";
            cin >> a[i];
         }

         for (int i=0; i<size; i++){
            cout << "b["<< i <<"]:";
            cin >> b[i];

         }
         for (int i=0; i<size; i++)
         {
            c[i] =a[i]+ b[i];

         }

         cout << "[";
         for (int d: c)
         {
            cout << d << ",";

         }
         cout <<"]";


         return 0;

    }
