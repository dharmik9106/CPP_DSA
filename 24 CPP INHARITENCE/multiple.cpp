#include<iostream>
#include<string>
using namespace std;



class teacher {
    public:
    string sub_name= "subject";
    void bark(){
        cout << "student lern by standerd 11th...!"<< endl;
    }
};

class sub {
    public:
    string sub_type = "gujrati";
    void meow(){
        cout << "student read by gujrati language...!" << endl;
    }
};

class school : public teacher, public sub{


};



int main(){

   school dharmik, pratik;
   pratik.bark();
   dharmik.meow();


   


    return 0;
}