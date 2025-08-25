#include <iostream>
#include <vector>
using namespace std;

class Stack
{

    vector<int> arr;

public:
    // Add methods for stack operations;

    void push(int value)
    {
        arr.push_back(value);

        cout << value << " Add to Stack" << endl;
    }

    void pop()
    {
        if (arr.empty())
        {
             cout << " Stack is empty " << endl;
             return;
        }
        
        int Topelement = arr.back();

        cout << Topelement << "  Removed for stack " << endl;
        arr.pop_back();

    }
    void peek(){

        cout << arr.back() << " Is top element " << endl;

    }

    void size(){
        cout << "Total element in array is " <<arr.size() << endl;
    }

    void deleteall(){

        arr.clear();
        cout << "Stack is cleared  now " << endl;

    }

    void display(){

        for (int i=arr.size()-1;i>=0; i--){
            cout << " Stack element " << arr[i] << " " << endl;
        }
    }

};

int main()
{

    Stack D1;
     
    D1.push(100);
    D1.push(200);
    D1.push(300);
    D1.push(400);
    D1.push(500);

    

    D1.peek();
    // D1.deleteall();
    D1.display();

    return 0;
}