#include<iostream>

using namespace std;


bool isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
       if(n % i == 0)
       {
        return false;
       } 
    }
    return true;
}



 int main(){

    int num = 46;

    
    
    
     if(isPrime(num)){
         cout << num << " is Prime Number" << endl;
       } else {
            cout << num << " is not Prime Number" <<endl;
      }
         
         for(int i=1; i<=79; i++)
         {
            if(isPrime(i))
            {
               cout << i << ", ";
            }
         }
 }