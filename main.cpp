#include <iostream>
using namespace std;

int main() {
    int number;
    int b1, b2, b3;

    cout << "Enter a number (1-7): ";
    cin >> number;

    // Input validation
    if (number < 1 || number > 7) {
        cout << "Invalid input. Please enter a number between 1 and 7.\n";
        return 0;
    }

    b3 = number % 2;
    number = number / 2;

    b2 = number % 2;
    number = number / 2;

    b1 = number % 2;

    cout << "Binary: " << b1 << b2 << b3 << endl;

    return 0;
}
