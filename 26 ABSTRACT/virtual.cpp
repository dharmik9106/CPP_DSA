#include <iostream>
#include<string>

using namespace std;

// abstract class
class object{

    public:
// virtual function
    virtual void alert() =0;
};

class subobj: public object{
    public:
    void alert(){
        cout << "hello everyone...! " << endl;
    }
};


int main(){


subobj obj;

obj.alert();
    return 0;
}
