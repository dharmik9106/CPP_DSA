#include <iostream>

using namespace std;


int main()


{
 
    int digit =148;


    int last_last= digit%10;
   
    while (digit>10)
    {
        digit=digit  /10;
        
    }

    int first_digit = digit;


    cout << first_digit * digit << endl;



}