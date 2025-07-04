#include<iostream>
#include<string>

using namespace std;

class car{
    public:
    string body ="carbun steel body";
    string wheell ="ceat wheell";
    string window = "glass window";
    string name = "swift";
};



class maruti : public car{
    public:
    string engine = "diesel";
    int price = 1000000;

    void getdetails(){
        cout << "name: " << this->name<< "; " <<  endl;
        cout << "engine: " << this->engine << "; " <<  endl;
        cout << "price: " << this->price << "; " <<  endl;
     

    }
};

int main()
{

    maruti s1;

    s1. getdetails();

    s1.wheell;


    return 0;

}

