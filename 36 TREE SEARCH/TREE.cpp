
#include <iostream>
using namespace std;


class Node{

    public:
    int  data ;
    Node* right ;
    Node* left;


    Node(int value){

        data = value ;
        right = left =nullptr;
    }
};

class Tree{
    public:

    Node*root;

    Tree(){
        root =nullptr;
    }


    void creatTree(){
        root = new Node(1);
        root->left = new Node(2);
        root-> right = new Node(3);
        root-> left-> left= new Node(4);
        root-> left-> right= new Node(5);
    }

    void preorder (Node* node){
        if(node == nullptr)return ;
        cout << node-> data << " ";
        preorder(node->left);
        preorder(node->right);

    }
    void inorder(Node* node){
        if(node == nullptr ) return;
        inorder(node-> left);
        cout << node -> data << " ";
        inorder(node-> right);

    }
    void postorder(Node* node){
        if(node == nullptr ) return;
        postorder(node-> left);
        postorder(node-> right);
         cout << node -> data << " ";

    }


};

int main(){
    Tree t;

    t.creatTree();


    cout << " pre order ";
    t.preorder(t.root);
    cout << "\n";


    cout << " in order ";
    t.inorder(t.root);
    cout << "\n";


    cout << " post order ";
    t.postorder(t.root);
    cout << "\n";


    return 0;
}
