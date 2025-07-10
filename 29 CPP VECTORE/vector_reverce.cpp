#include<iostream>
#include<string>
#include<vector>

using namespace std;

void revarr(vector<int> arr, vector<int> revarr){

    for (int i=arr.size()-1; i>=0; i--){
        revarr.push_back(arr[i]);

    }

    for (int e: revarr){
        cout << e << ", ";
    }
    cout << endl;
}

int main(){

    vector <int> arr = {1, 2, 3, 4, 5};
    vector <int> revarr;


    int i=0;
    int j= arr.size()-1;

        while(i< j){

            int temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
        
        for (int e : arr){
            cout << e <<", ";
        }

        cout << endl;



    return 0;

}