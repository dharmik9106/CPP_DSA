#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Std{

    public:
    int id;
    string name;

    Std(int id, string name){
        this->id =id;
        this->name = name;

    }

};

class List{
    public: 
        vector<Std> list;

        List(){

        }

        void addstudent(int id, string name){
            Std s(id, name);

            this->list.push_back(s);
        }

        void updatestudent(int id, string n){
            for (Std e: this->list){
                if (e.id == id){
                    e.name = n;

                }
            }
        }

        void showAll(){
            for (Std e: list){
                 cout<< e.id << ", " <<e.name <<endl;
            }
           
        }
};




int main(){


    List list;

    list. addstudent(111, "Dharmik ");
    list. addstudent(222, "Pratik ");
    list. addstudent(333, "Utsav ");
    list. addstudent(444, "Vaishali ");
    list. addstudent(555, "Brij ");

    

    list.showAll();

    return 0;

}
