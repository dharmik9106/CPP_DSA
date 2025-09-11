

#include <iostream>

#include <vector>

using namespace std;


int binarysearch(const vector<int> &arr, int start , int end, int searchvalue){

    if(start<=end){

        int mid = start +(end-start)/2;

        if (arr[mid] == searchvalue){
            return mid;

        }
        else if (arr[mid] <searchvalue){
            return binarysearch(arr, mid+1, end, searchvalue);

        }
        else { 
             return binarysearch(arr, start , mid-1, searchvalue);

        }
        return -1;
    }
}

int main(){

    const vector<int> arr= {10, 20, 30, 40, 50,} ;

    int searchvalue = 10;

    int ind = binarysearch(arr, 0, arr.size()-1, searchvalue);

    if (ind ==-1){
        cout << "not found in array " << endl;

    }else{
        cout << searchvalue << " is  sorted element in index position " << ind << endl;
    }
    return 0;

}
