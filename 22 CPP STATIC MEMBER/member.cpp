#include<iostream>
#include<string>


using namespace std;


class dha{

    public:
    string arr[5];
    int count = 0;

    void push(string name){
        this->arr[count] = name;
        count++;
    }

};

int main(){

    dha arr1;

    arr1.push("pratik: ");
    arr1.push("utsav: ");
    arr1.push("darmik: ");

    cout << arr1.arr[0] << endl;
    cout << arr1.arr[1] << endl;
    cout << arr1.arr[2] << endl;

    return 0;
}