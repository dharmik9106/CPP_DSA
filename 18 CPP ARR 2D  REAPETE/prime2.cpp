#include<iostream>

using namespace std;
bool isPrime(int n){
        int count = 0;
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return  true;
}


int allPrime(int n){
    
    for(int i=1; i<n; i++)
    {
        if(isPrime(i))
        {
            cout << i << ", ";
        }
    }
}


int closePrime(int n){
    
    for(int i=n-1; i>1; i--)
    {
        if(isPrime(i))
        {
            return i;
        }
    }
}




    int main(){
    int n;
    cout << "n: ";
    cin >> n;

    

    cout << allPrime(n);


    return 0;
 }