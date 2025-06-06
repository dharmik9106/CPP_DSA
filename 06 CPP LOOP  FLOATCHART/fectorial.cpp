#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;  // Multiply result by i in each iteration
    }
    return result;
}

int main() {
    int num;

    // Ask for user input
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}