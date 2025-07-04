#include<iostream>
#include<string>
using namespace std;

class sheetal{
    public:
    string company = "ice-creem";

    void  product(){
        cout << "company is best product ...!" << endl;
    }
};


class employs : public sheetal{

    public:
    void price(){

    }

};

class cone : public sheetal{

    public:
    string name = "butterscotch";
    string type = "kaju-draksh";
    void kaju(){

    }

};




int main(){

    cone c1;

    cout  <<"name: " << c1.name  << endl;
    cout  << "type: " << c1.type  << endl;
    return 0;
}