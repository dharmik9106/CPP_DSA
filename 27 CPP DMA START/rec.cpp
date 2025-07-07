#include<iostream>
#include<string>
using namespace std;


void rec(){

    cout << "hello world"<< endl;

    rec();
}


int main(){

    int a =10, b=20;
    rec();

}