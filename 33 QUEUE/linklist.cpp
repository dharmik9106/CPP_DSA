#include <iostream>

using namespace std;


class  Node{
    public:
    int data;
    Node* next;


    Node(int value){
        data=value;
        next = nullptr;

    }

};

class linklistqueue{
    Node* front ;
    Node* rear;

    public:linklistqueue(){
        front= rear =nullptr;

    }

    void enqueue(int value){

        Node* newNode =new Node (value);

        if (rear== nullptr ){
            front= rear =newNode;

        }
        else{
            rear->next =newNode;
            rear=newNode;

        }

        cout<< value << " added for queue" << endl;


    }
    void dequeue(){

        if (front == nullptr){
            cout<< " queue is empty" << endl;
            return;
        }
        Node* temp = front ;
        cout << temp->data << " is removed from queue" << endl;
        front = front->next;
        delete temp;


        }

        void peek (){

            if (front == nullptr){
                cout<< "queue is empty" << endl;
                return;

            }

            cout << front-> data << " is the top element  in queue" << endl;

        }

        void display(){

            if (front ==nullptr){
                cout << " queue is empty" << endl;
                return;

            }
            Node* temp = front ;

            cout << " element are in queue";
            while (temp!= nullptr){
                cout << temp ->data << " ";
                temp= temp-> next;

             }
             cout <<endl;

        }
};

int main() {
    linklistqueue q;

    q. enqueue(1);
    q. enqueue(2);
    q. enqueue(3);
    q. enqueue(4);


    q.dequeue();

    q.peek();
    q.display();

    return 0;

}