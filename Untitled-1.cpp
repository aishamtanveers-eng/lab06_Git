#include <iostream>
using namespace std;
int main(){
    
int code;
    cout << "Enter a positive integer code: ";
    cin >> code;

    int originalCode = code;
    int divisor = 1;
    int digitCount = 0;

    // Find the highest decimal place
    while (originalCode / divisor >= 10) {
        divisor *= 10;
    }

    cout << "Spoken code: ";

    // Process digits from left to right
    while (divisor > 0) {
        int digit = code / divisor;
        code %= divisor;

        if (digitCount > 0) {
            cout << " ";
        }

        switch (digit) {
            case 0: cout << "Zero"; break;
            case 1: cout << "One"; break;
            case 2: cout << "Two"; break;
            case 3: cout << "Three"; break;
            case 4: cout << "Four"; break;
            case 5: cout << "Five"; break;
            case 6: cout << "Six"; break;
            case 7: cout << "Seven"; break;
            case 8: cout << "Eight"; break;
            case 9: cout << "Nine"; break;
        }

        digitCount++;
        divisor /= 10;
    }

    cout << endl;
    cout << "Original code: " << originalCode << endl;
    cout << "Digit count: " << digitCount << endl;


    return 0;
}
