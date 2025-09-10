#include <iostream>

#include <vector>

using namespace std;

int partition (vector<int> & arr, int start , int end ){

    int ind = start-1; int pivot =arr[end];

    for (int j= start; j<end; j++){
        if (arr[j]<= pivot){
            ind++;


            int temp = arr[j];
            arr[j]= arr[ind];
            arr[ind] =temp;

        }
    }

    ind ++ ;
    swap(arr[end],arr[ind]);
    return ind;
    
}

void quicksort(vector<int> &arr, int start , int end){

    if(start<end){

        int pivind = partition(arr, start, end);

        quicksort(arr, start , pivind-1);
        quicksort(arr,pivind+1, end);
    }
}


int main (){

    vector <int >arr = {9, 6, 5, 4, 3, 8, 2, 1,};

    quicksort(arr, 0, arr.size()-1);

    cout << "sorted elements are ";

    for ( int i= 0; i<arr.size(); i++)
    {
        cout << arr[i] << " ,";
    }



    return 0;

}