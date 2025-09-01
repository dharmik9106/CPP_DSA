

#include <iostream>

using namespace std;


int main() {

    int arr[] = { 7, 6, 4, 9, 2};
    int n=5;

    for (int i=1; i<n; i++){

        int dsa = arr[i];

        int j= i-1;

        while (j>=0 && arr[j]>dsa){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=dsa;
    }

    cout << "sorted element are ";
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";

    }
    cout << endl;
    

    return 0;

}