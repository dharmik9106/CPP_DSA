#include<iostream>
#include<string>

using namespace std;

class car
{

    public: 
    string name;
    string model;

    car (string name, string model){

        this-> name= name;
        this-> model= model;

    }

    car(const car &obj){
        this-> name =obj.name;
        this-> model =obj.model;

    }
    

};

int main()
{
car obj1("oddi", "A5"), obj2(obj1), obj3("creta", "ex") , obj4(obj3);


    cout<< "obj1-name: "<< obj1.name << "; " <<endl;
    cout<< "obj1-model: "<< obj1.model << "; " <<endl;

    cout << "------------------" << endl;

    cout<< "obj4-name: "<< obj4.name << "; " <<endl;
    cout<< "obj4-model: "<< obj4.model << "; " <<endl;



    return 0;
}