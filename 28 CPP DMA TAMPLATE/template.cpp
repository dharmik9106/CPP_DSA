#include<iostream>
#include<string>

using namespace std;

template<typename T1 , typename T2>

class myname{

    private:

    T1 num1;
    T2 num2;

    public:

    myname(T1 num1 , T2 num2){
        this-> num1 =num1;
        this-> num2 =num2;

    }
     
    T2 sum(){
        return this->num1 + this-> num2;

    }

};

int main(){

    myname <string, string>obj2("dharmik ","sanga");
    myname <string, string>obj3("Utsav ","Patel");
    myname <string, string>obj4("Pratik ","Dabhi");


    cout << obj2.sum() << endl;
    cout << obj3.sum() << endl;
    cout << obj4.sum() << endl;
   

    return 0;
}

