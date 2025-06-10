#include <iostream>
using namespace std;

int main() 
{
    
    

    int arr [4] = {2, 3, 4,};
     
    int size = sizeof(arr)/ sizeof(arr[2]);


    for (int i=0; i<size; i++)
    {
        cout << "arr("<< i << "):" << arr [i] << endl;

    }
}