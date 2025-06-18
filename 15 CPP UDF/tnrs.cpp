#include <iostream>

using namespace std;


// TAKE NOTHING RETURN SOMETHING


int sumsci(){
    int math = 50;
    int eng = 93;
    int che = 89;
    int comp = 90;
    int sci = 78;

    int sum =math + eng + che + comp + sci;

    return sum;
}

int sumcom(){
    int acu =93;
    int eco =60;
    int eng =89;
    int state =90;
    int ba =50;

        int sum =acu + eco + eng + state + ba;

    return sum;

}
int main()
{
    int sum1 = sumsci();
    int sum2 = sumcom();
        
    
        int avg1 = sum1/5;
        int avg2 = sum2/5;


        cout << "avg science: "<< avg1 << endl;
        cout << "avg commerce: "<< avg2 << endl;

        return 0;
}