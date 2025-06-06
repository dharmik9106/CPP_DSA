#include<iostream>

using namespace std;


int main(){ 


            int choice, type;

            cout << "press 1 buy   car"<< endl;
            cout << "press 2 buy   truck:" << endl;
            cout << "press 3 buy   cycle:" << endl;
            cout << "press 4 buy   bike:" << endl;
            cout << "press 5 buy   scooter:"<< endl;

            cout << "choice:";
            cin >> choice;

    switch(choice){
       case 1:  
                cout << "select 1 for hunday car"<< endl;
                cout << "select 2 for suzuki car"<< endl;
                cout << "select 3 for skoda car"<< endl;
                cout << "select 4 for bmw car"<< endl;
                cout << "select 5 for range rover car"<< endl;
                cout << "type:";
                cin >> type;

                if(type==1)
                {
                    cout << "hunday car"<< endl;
                    cout << "1500,000"<< endl;

                }
       
                else if (type==2)
                {
                    cout << " select suzuki"<< endl;
                }
                else if(type==3)
                {
                    cout << " select car creta"<< endl;
                }

                break;

       case 2:  
                cout << "type of truck"<< endl;
                cout << "select 2 for krishna truck"<< endl;
                cout << "select 3 for "<< endl;
                cout << "select 4 for bmw car"<< endl;
                cout << "select 5 for range rover car"<< endl;
                cout << "type:";
                cin >> type;

                if(type==1)
                {
                    cout << "tata truck"<< endl;
                    cout << "1500,000"<< endl;

                }
       
                else if (type==2)
                {
                    cout << " select suzuki truck"<< endl;
                }
                else if(type==3)
                {
                    cout << " truck no brand"<< endl;
                }

                break;
       
    

    return 0;

    }
}