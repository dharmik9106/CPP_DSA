#include <iostream>
#include <stack>


using namespace std;


 class  queueStack{
    stack< int > s1, s2;

    public:

    void enqueue(int value){
        s1.push(value);

        cout << value << " added by queue" << endl;

    }
    void dequeue (){
        if (s1.empty()&&s2.empty()){
            cout << "queue is empty" << endl;
            return ;

        }

        if (s2. empty() ){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();



            }
            cout << s2.top() << "is removed from queue" << endl;
            s2.pop();

            while (!s2.empty()){
                s1.push(s2.top() );
                s2.pop();

            }

        }

    }

    void peek(){
         if (s1.empty()&&s2.empty()){
            cout << "queue is empty" << endl;
            return ;

        }

        if (s2. empty() ){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
    }
    cout << s2.top()<< " is the top element in queue" << endl;

    while (!s2.empty()){
        s1.push(s2.top());
        s2.pop();


    }
 }

};


int main(){

    queueStack q;

    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.dequeue();
    q.peek();


}