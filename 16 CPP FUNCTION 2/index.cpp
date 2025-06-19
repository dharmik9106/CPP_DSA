#include <iostream>
 using namespace  std;



int sum(int n)
{
    int sum = 0;
    for(int i=1; i<=10; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int score(int arr[], int size)
{
    int sum =0;
    for (int i=0; i<size; i++)
    {
        sum +=arr[i];

    }

    int avg =sum/ size;


    return avg;

}


int main()

{
    int ans = sum(10);
    cout << ans;

    int bba[4] ={50, 76, 90, 60};
    int bed[4] ={70, 79, 83, 69};


    int avg = score (bba, 4);

    cout << avg << endl;
    cout << "avg: "<<score(bba, 4);


    return 0;
}