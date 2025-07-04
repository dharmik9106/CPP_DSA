#include<iostream>
#include<string>
using namespace std;

class school{
    public:
        int add(int n1, int n2 )
        {
            return n1+n2;
        }
};

class principle : public school {
    public:
     int add(int n1, int n2 )
        {
            return n1*n2;
        }
};

class teacher: public principle{
    public:
        int add(int n1, int n2 )
        {
            return n1/n2;
        }
};


 int main(){

   teacher gc;

   cout <<  gc.school::add(10, 2) << endl;
   cout <<  gc.principle::add(10, 2) << endl;
   cout <<  gc.add(10, 2) << endl;
    

    return 0;
 }