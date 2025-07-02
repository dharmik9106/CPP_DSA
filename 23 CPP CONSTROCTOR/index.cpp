#include <iostream>
#include <string>


using namespace std;

class object{

    private:

    int grid;
    string name;
    string course;

    public:


    object(){
        this->grid = 1121;
        this-> name ="dharmik";
        this-> course ="fsd";
        cout << "object is constructed"<< endl;
    } 


    object(int id){
        this->grid =id;
        this->name ="pratik";
        this-> course= "-";

    }


    void setdata(string name, string course){
        this->name = name;
        this->course = course;

    }

    void getdata()
    {
        cout << this-> grid << endl;
        cout << this-> name << endl;
        cout << this->course << endl;
    }
};

int main()
{
    object obj1(2), obj2(3), obj3(4) ,obj4;


    obj1.setdata("dharmik", "fsd");
    obj2.getdata();
    obj3.getdata();
    obj4.getdata();

    return 0;
}