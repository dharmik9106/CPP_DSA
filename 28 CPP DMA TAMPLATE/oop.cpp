#include <iostream>
#include <string>
using namespace std;

template<typename T>
class vector {

    private:
    int size;
    T*arr;

    public:

    vector(){
        this->size =0;
        arr = new T [100];

    }

    vector (int size ,T ele){
        this->size = size;
        arr =new T[100];
        for (int i=0; i<this->size; i++){
            arr[i] =ele;
            }
    }
    void push(T ele){
        arr[this-> size] =ele;
        this->size++;
    }

    void pop(){
        this->size;
    }

    void length(){
        cout << this->size << endl;
    }

    void print(){
        for(int i=0; i<this->size; i++){
            cout << arr[i] <<", ";
        }
        cout << endl;
    }
};
int main(){
    vector <int> arr;
    vector <int> array (5, 4);

    arr.push(2);
    arr.push(3);
    arr.push(4);
    arr.push(5);
    arr.length();

    arr.pop();
    arr.pop();

    arr.print();
    cout << "------------------------" << endl;


    vector <char>str;

    str.push('a');
    str.push('b');
    str.push('c');
    str.push('d');
    str.push('e');

    str.length();
    str.print ();


   cout << "----------------------" << endl;

    
   vector <string> name;

   name.push("jorny");
   name.push("utsav");
   name.push("pratik");
   name.push("brij");
    name.length();
    name.print();
    

    return 0;
}