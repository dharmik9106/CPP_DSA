#include <iostream>
#include <vector>

using namespace std;


void merge(vector<int>&arr,int start, int mid, int end){

    vector<int> temp;
    int i=start ,j=mid+1;

    while (i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;

        }else{
            temp.push_back(arr[j]);
            j++;

        }
    }

    while (i<=mid)
    {
        temp.push_back(arr[i]);
        i++;



    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;

    }
    for(int k=0; k<temp.size(); k++){
        arr[start+k]=temp[k];

    }

    
}

void mergesort(vector <int>&arr, int start, int end){

    if (start<end){

        int mid= start + (end-start)/2;

        mergesort(arr, start,mid);


        mergesort(arr, mid+1, end);


        merge(arr, start,mid,end);
    }

}

int main(){

    vector<int> arr={9,10,39,51,7,8,2,};

    mergesort(arr,0, arr.size()-1);


    cout <<"sorted elemnets are ";

    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] << ", ";
    }

    return 0;
}