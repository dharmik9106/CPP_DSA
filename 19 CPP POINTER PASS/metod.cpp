#include <iostream> 

using namespace std;


void del(int arr[], int &size )
{
    for (int i=0; i<size; i++)
    {
        arr[i] = arr[i+1];
 
    }
   size--;

}

void print(int arr[], int &size)
{
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << endl;

    }
}
int main()
{

    int size = 4;
    int arr[size] = {1, 2, 3, 4,};


    
    del(arr, size);
    print(arr, size);

    return 0;

}