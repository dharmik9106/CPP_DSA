#include <iostream>

using namespace std;

int main(){

    int a,b,c ;


    cout << " a:";
    cin >> a;
    cout << " b:";
    cin >> b;
    cout << " c:";
    cin >> c;

    if (a < b){

        if(a > c)
        {
             cout << "a is grater"<< endl;
        }
        else {
            cout << "c is grater" << endl;
        }

    }
    if (b < c){

        if(b < c)
        {
             cout << "b is grater"<< endl;
        }
        else {
            cout << "c is grater" << endl;
        }

    }

}