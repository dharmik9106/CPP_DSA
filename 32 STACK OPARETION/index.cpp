#include<iostream>
using namespace  std;


class Stack {

    public:
    int arr[5];
    int top;


    public: Stack(){
        top = -1;

    }
    void push(int value){
        if(top == 4){
            cout << "stack is full" << endl;
        }
    
    else{
         top++;
         arr[top] = value;
         cout << value << " value pushed in stack ;" << endl;

    }
}

void pop(){
    if (top == -1){
        cout << "stack is empty" << endl;

    } else{
        cout << arr[top] << " value pop from stack ;" <<endl;
        top--;

    }
}
void peek(){
    if (top == -1){
        cout << arr[top]<< "stack is empty" << endl;

    } else{
        cout << arr[top] << " this is my top stack elements ;" << endl;

    }
}

 void size(){
     if (top == -1){
         cout << " empty stack" << endl;


     }
     else{
        cout << " total elements in stack are ;" << top+1 << endl;
     }
 }

};

int main(){
    
    Stack S;
     
    S.push (1);
    S.push (2);
    S.push (3);



    S.push (3);
    S.pop();
    S.peek ();
    S.size();

    S.push (4);


    return 0;
}