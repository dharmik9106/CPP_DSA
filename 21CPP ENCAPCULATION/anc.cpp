#include <iostream>
#include <string>

using namespace std;

class dha
{

private:
    int mark;
    char grad;
    int per;

public:
    void setter(int mark, char grad, int per)
    {
        this->mark = mark;
        this->grad = grad;
        this->per = per;
    }

    void getter(){

        cout << "mark: "<< this->mark << endl;
        cout << "grad: "<< this->grad << endl;
        cout << "per: "<< this->per << endl;


    }
};

int main()
{

    dha d1, d2;

    int mark;
    char grad;
   int per;

    cout << "Enter mark: ";
    cin >> mark;
    cout << "Enter grad: ";
    cin >> grad;
    cout << "Enter per: ";
    cin >> per;

    d1.setter(mark, grad, per);
    d1.getter();


    cout << "---------------------------------" << endl;

     cout << "Enter mark: ";
    cin >> mark;
    cout << "Enter grad: ";
    cin >> grad;
    cout << "Enter per: ";
    cin >> per;


    d2.setter(mark,grad,per);
    d2.getter();


    return 0;
}