#include<iostream>

using namespace std;

template<typename T>
T sum(T x , T y){
    return x  + y;
}

int main(){

   cout <<  sum<int>(40, 10) << endl;
   cout <<  sum<float>(10.2, 20.1) << endl;
   cout <<  sum<char>('l', 'q') << endl;

   

    return 0;
}

