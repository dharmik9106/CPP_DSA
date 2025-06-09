#include <iostream>

using namespace std;


int main()


{
 
    int digit;
    cout << "Enter digit : ";
    cin>>digit;
    
    int sum=0;
   
    while (digit>0)
    {
        sum += digit%10;

        digit=digit/10;
        
    }


    cout << sum<< endl;

return 0;

}


