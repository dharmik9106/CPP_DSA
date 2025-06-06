#include<iostream>

using namespace std;



int main(){


    int d,h,a;


    cout <<"d: ";
    cin >>d;

    cout <<"h: ";
    cin >>h;

    cout <<"a: ";
    cin >>a;

    if (d>h)
    {
        cout << "d is a grater"<< endl;
    }
    else if(h>a)
    {
        cout << "h is a grater"<< endl;
        
    }
    else if(a>d)
    {
        cout << "a is a grater..!"<< endl;

    }
   
}