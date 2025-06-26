#include<iostream>
#include<string>
using namespace std;

    class data{
            
        public:

        string name;
        int score;
        string gre;
        string medall;


    };

int main()
{
    data s1;

    int size;
    cout << "size: ";
    cin >> size;


   data s[size];

    for (int i=0; i<size; i++)
    {

        cout << i << "-name: ";
        cin >> s[i].name;
        cout << i << "-score: ";
        cin >> s[i].score;
        cout << i << "-gre: ";
        cin >> s[i].gre;
        cout << i << "-medall: ";
        cin >> s[i].medall;

        cout << endl;
     
    }

    cout << "-----------------------------------" << endl;

    for (int i=0; i<size; i++)
    {
        cout << "name: " << s[i].name<< endl;

        cout << "score: " << s[i].score<< endl;

        cout << "gre: " << s[i].gre<< endl;

        cout << "medall: " << s[i].medall<< endl;

    }

    return 0;

}