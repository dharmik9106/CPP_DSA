#include<iostream>
#include<string.h>

using namespace std;

class dharmik{
    private:
     
    static string code;

    public:

    int roll;
    static string name;
    static string course;

    static void mycode(string c){
        code= c;
        
    }
    static void getmycode(){
      cout << code<< endl;
    }
};

string dharmik:: course= "fsd";
string dharmik:: name= "utsav";
string dharmik:: code= "";


int main()
{

    dharmik batch[4];

    dharmik std1, std2;

    std1.roll= 111;
    std1.name= "utsav";


    std2.roll= 222;
    std2.name= "pratik";

    batch[0] = std1;
    batch[1] = std2;
    batch[2].name = "jay";

    
    
    
    cout << std1.course  << endl;
    cout << std1.name  << endl;
      dharmik::mycode("dsa");

    dharmik::getmycode();


    return 0;

}

