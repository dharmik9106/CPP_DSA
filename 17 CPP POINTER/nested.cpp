#include<iostream>

using namespace std;

void third(){
    
    cout << "Third is called. " << endl;
}

void second(){
    third();
    cout << "Second is called." << endl;
    
}

void first()
{   second();
    cout << "first is called." << endl;
  
}

 int main(){

    first();
  
    return 0;
 }