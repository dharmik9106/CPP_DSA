#include <iostream>
#include <string.h>

using namespace std;

class bank
{

private:
    long long int accno = 920394995300;
    long long int phone = 9227101532;
    int balance = 50000;
    string name = "dharmik sanga";
    string email = "dharmik@gmail.com";
    string password = "dharmik123";
    int pin = 4545;

public:
    bool login(string email, string password)
    {
        if (this->email == email && this->password == password)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    void balancechek(int pin)
    {
        if (this->pin == pin)
        {
            cout << "balance: " << this->balance << endl;
        }
        else
        {
            cout << "invalide pin...!" << endl;
        }
    }


    void diposit(int amount, int pin)
    {
        if (this->pin == pin)
        {
            this->balance += amount;
            cout << "amount Deposited Successfully...!" << endl;
        }
        else
        {
            cout << "invalid Pin...!" << endl;
        }
    }


    void withdrawal(int amount, int pin)
    {
        if (this->pin == pin)
        {
            if (this->balance < amount)
            {
                cout << "insufficiant balace...!" << endl;
            }
            else
            {
                this->balance -= amount;
                cout << "widrawal is successfully" << endl;
            }
        }
        else
        {
            cout << "invalid Pin...!" << endl;
        }
    }


    
    void myProfile(int pin){
        if(this->pin == pin ){
        cout << "name: " << this->name << endl;
        cout << "email: " << this->email << endl;
        cout << "acc No: " << this->accno << endl;
        cout << "phone: " << this->phone << endl;
        }else{
            cout << "invalide pin,..!" << endl;
        }
    }

    void changePin(int pin, int newpin){
        if(this->pin == pin)
        {
            this->pin = newpin;
        }else{
            cout << "old pin is wronge...!" << endl;
        }
    }
};

int main()
{

    bank hdfc;
    int choice, pin, amount, account;
    string email, password;

    cout << "Enter email: ";
    cin >> email;

    cout << "Enter password: ";
    cin >> password;


    if (hdfc.login(email, password))
    {
        while (choice != 0)
        {

            cout << "Press 1 for balance: " << endl;
            cout << "Press 2 for diposite: " << endl;
            cout << "Press 3 for withdrawal: " << endl;
            cout << "Press 4 for update file: " << endl;
            cout << "Press 5 for update pin: " << endl;
            cout << endl;

            cout << "Enter Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter pin: ";
                cin >> pin;
                hdfc.balancechek(pin);
                break;

            case 2:
                cout << "Enter Deposit Amt: ";
                cin >> amount;
                cout << "Enter pin: ";
                cin >> pin;
                hdfc.diposit(amount, pin);
                break;

            case 3:
                cout << "Enter withdrawal amt : ";
                cin >> amount;
                cout << "Enter pin : ";
                cin >> pin;
                hdfc.withdrawal(amount, pin);
                break;
                  
            case 4: 
                         cout << "Enter Pin: ";
                        cin >> pin;
                        hdfc.myProfile(pin);
                        break;
                        
            case 5: 
                         cout << "Enter old: ";
                        cin >> pin;
                        int newpin;
                         cout << "Enter new: ";
                        cin >> newpin;
                        hdfc.changePin(pin, newpin);
                        break;
        
            }
          
        }  cout << "---------------------------" << endl;
    }
    else
    {
        cout << "envalid credential...!" << endl;
    }

    return 0;
}