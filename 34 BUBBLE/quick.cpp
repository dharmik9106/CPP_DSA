#include <iostream>
#include <vector>

using namespace  std;


int partition(vector <int> &arr, int start ,int end){

    int inx = start -1;

    int pivot = arr[end];


    for (int j=start; j<end; j++){

        if (arr[j]<=pivot){

            inx++;
            swap(arr[j], arr[inx]);

        }
    }
    inx++;

    swap(arr[end], arr[inx]);


    return inx;

}

void quicksort(vector<int> &arr, int start,int end){

    if (start<end){

        int pivinx =partition(arr, start, end);

        // left half ;

        quicksort(arr, start, pivinx -1);

        // right half ;

        quicksort(arr, pivinx+1, end);

    }
}

int main(){

    vector<int> arr = {8, 9, 4, 5, 6, 7,};

    quicksort(arr, 0, arr.size()-1);

    cout << "sorted element are ";
    for (int i=0; i<arr.size(); i++){
        cout<< arr[i]<<" ,";
    }

    return 0;
}
