#include<iostream>

using namespace std;

 
// TNRN - TAKE NOTHING RETURN NOTHING

void sumarr(){
    
    int arr[5]= {1, 2, 3, 4, 5};


    int sum = 0;
    for (int i=0; i<5; i++)
    {
        sum += arr[i] ;
    }
    cout << "sum: " << sum << endl;
    
}

void evenEle(){
   
    int arr[5]= {1, 2, 3, 4, 5};

    cout <<"Even no: ";
    for(int i=0;i<5; i++)
    {
        if(arr[i] % 2 ==0)
        {
            cout << arr[i] << ", ";
        }
       
    }

    cout << endl;
}

void factorial(){
   
    int arr[5]= {1, 2, 3, 4, 5};
    int fact = 1;
    for(int i=0;i<5; i++)
    {
       
        fact *= arr[i]; 

    }
    cout <<"factorial: "<<  fact <<endl;
}

void cubearray(){
    int arr[5]= {1, 2, 3, 4, 5};

    cout <<"cubes: ";
    for (int i=0; i<5; i++){

        cout << arr[i]*arr[i]*arr[i]<< " ,";


    }

    cout << endl;
    

}

 
int  main(){

    sumarr();

    evenEle();

    factorial();

    cubearray();
    

    return 0;
}

