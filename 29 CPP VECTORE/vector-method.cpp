#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    vector<int> arr{1, 2, 3, 4, 5,};

    arr.push_back(20);
    arr.pop_back();


    cout << "empty: " << arr.empty() <<endl;
    cout << "at: " << arr.at(2) <<endl;
    cout << "front: " << arr. front() <<endl;
    cout << "back: " << arr. back() <<endl;
    cout << "size: " <<  arr. size() <<endl;

    arr.insert(arr.begin()+5, 7);

    arr.erase(arr.begin() + 2, arr.begin()+4);

    for (int e : arr){ 
        cout << e << ", ";
    }


    return 0;
}