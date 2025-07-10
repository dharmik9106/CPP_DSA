#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main(){

   vector<int> arr= {4, 1, 5, 6, 2, 7, 3, 9};


   for (int i=1;i<arr.size()-1; i++)
   {
    if(arr[i-1] > arr[i] && arr[i] < arr[i+1]){
        cout << arr[i] << ":" << endl;
    }

   }




    return 0;

}