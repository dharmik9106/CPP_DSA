#include<iostream>
#include<string>

using namespace std;
class school{
    public:
        int add(int n1, int n2 )
        {
            return n1+n2;
        }
            int add(int n1, int n2, int n3, int n4 )
        {
            return n1+n2+n3+n4;
        }
        string add(string n1, string n2)
        {
            return n1+n2;
        }
};
int main(){

    school sh;
    cout << sh.add(2,2)<< endl;
    cout << sh.add(3,4)<< endl;
    cout << sh.add(30,2)<< endl;
    return 0;
}