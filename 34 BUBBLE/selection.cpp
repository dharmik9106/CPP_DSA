// #include <iostream>

// using namespace std;

// int main(){


//     int arr[]={9,4,2,7,10,24};
//     int n=6;

//     for (int i=0; i<n-1; i++){
//         int smalleindex= i;

//         for (int j=i+1; j<n; j++){
//             if(arr[j]< arr[smalleindex]){
//                 smalleindex=j;

//             }
//         }
//         swap (arr[i],arr[smalleindex]);


//     }

//     cout<<"sorted elements are ";
//     for (int i=0;i<n; i++){
//         cout << arr[i]<<" ";
//     }

// }


#include <iostream>

using namespace std;

void selectionsort(int arr[],int n){

    for (int i=0; i<n-1; i++){
        int smalleindex=i;

        for (int j=i+1; j<n; j++){
            if(arr[j] <arr[smalleindex]){
                smalleindex=j;

            }
        }

        swap(arr[i], arr[smalleindex]);

    }
    cout << "sorted element are ";
    for (int i=0; i<n; i++){
        cout<< arr[i] << " ";

    }
}

int main(){

    int arr[]= {9, 20, 37, 65, 3, 8};
    int  n=6;

    selectionsort(arr, n);


    return 0;
}