#include <iostream>

using namespace std;


int main(){

int a= 10;

int *p =&a;
int **p1= &p;
int ***p2 =&p1;

    
    cout << p <<" - "<< *p << endl;
    cout <<*p1 <<" - " << **p1 <<endl; 
    cout << **p2 << " - "<< ***p2 << endl;

    return 0;

}