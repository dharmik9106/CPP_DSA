#include <iostream>

using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    int input = 5;
    int output = square(input);  // Take Something, Return Something
    cout << "Square of " << input << " is " << output;
    return 0;
}
