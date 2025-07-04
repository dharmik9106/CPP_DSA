#include<iostream>
#include<string>

using namespace std;

class animal{

    public:
    int legs=4;
    void eat(){
        cout << "pets can eat...!" <<endl;
    }
};

class dog: public animal{
    public:
    void bark(){
        cout << "dog can bark" << endl;
    }
};

class cat : public animal{
    public:
    void meow(){
        cout <<"cat can  meow"<<  endl;
    }

};
class pet : public dog, public cat{

};

int main(){

    pet puppy, swity;

    cout << puppy.dog::legs << endl;
    puppy.bark();

    swity.meow();
    swity.cat:: eat();

    return 0;

}
