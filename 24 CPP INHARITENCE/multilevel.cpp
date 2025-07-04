#include<iostream>
#include<string>

using namespace std;

class tution {
    public:
    int sub = 5;
    
};
class student : public tution{
        public:
        string name ="pratik: ";
        void cource(){
        }
};

class pratik : public student{
    public:
    void study(){
    }
};



int main(){

    pratik p1;
    cout << p1.name << endl;


    return 0;
}
