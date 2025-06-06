#include <iostream> 

using namespace std;


int main(){




    cout << " press buy  cricket-box"<< endl;
    cout << " press buy burger"<< endl;
    cout << " press buy samosa"<< endl;
    cout << " press buy snack"<< endl;
    cout << " press buy pizza"<< endl;

    int d;
    int s;
    cout <<" enter this number ";
    cin >> d;

    if(d== 1){

        cout << "order buy pizza "<< endl;
        cout << " price:" << 300 << endl;

    }
    else if( d== 2 ){

        cout << "order buy chocolate" << endl;
        cout << " price:" << 300 << endl;


    } 
    else if ( d== 3){
        cout << "order buy cricket-box " << endl;
        cout << " price:" << 1000 << endl;

      
    }

    else if (d== 6){
         cout << " order buy leptop"<< endl;
         cout <<" price:"<< 10000 << endl;

         
    cout <<" enter this number: ";
    cin >> s;
          
    if(s==1){
        cout << " dell leptop ";
        cout << "price: "<< 8000 << endl;
    }
    else if(s==1){
        cout << " acer leptop ";
        cout << "price: "<< 6000 << endl;
    }

    return 0;
}

}



