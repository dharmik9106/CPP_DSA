#include<iostream>
#include<string>
using namespace std;


  int main(){

    int x=5;

    int *a =new int;
    *a =7878;
    int *b =new int (4545);


    cout << *a << endl;

    cout << *b << endl;

    delete a;
    a= new int (27);

    cout << a << endl;


    return 0;
  }