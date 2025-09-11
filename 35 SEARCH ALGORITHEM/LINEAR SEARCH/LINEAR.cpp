#include <iostream>

#include <vector>

using namespace std;

int linearsearch(const vector<int>&arr, int searchvalue){

    for(int i=0;i<arr.size(); i++){
        if (arr[i]== searchvalue){

            return i;
        }
    }

    return -1;
}


int main(){
    const vector<int>arr={10, 29, 30, 5, 4, 7, 40};

    int searchvalue = 5;

    int ind = linearsearch(arr,searchvalue);

    if (ind ==-1){
        cout << "element is not found in array";
    }
    else{
        cout << searchvalue << " is  sorted element in index position " << ind << endl; 
    }

    return 0;
}