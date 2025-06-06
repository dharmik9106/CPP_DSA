#include <iostream>

using namespace std;


int main()
{

    // int i = 1;
    // int n = 6;
    // int fact = 1;


    // while (i<=n)
    // {
    //     fact= fact*i;
    //     i++;

    // }

    // cout <<"factorial of " << n <<":"<< fact << endl;



    int n =1;
     cout << "n:";
     cin >> n; 
    int i =1;


    while (i <= n)
    {
        if(n % i ==0)
        {
            cout << i << endl;

        }
        i++;
    }


    return 0;
}