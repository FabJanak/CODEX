#include<iostream>
using namespace std;

int main() {
    int n1, n2, op;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Absolute Value" << endl;
    cin >> op;

    switch(op) {
        case 1:
            cout << "Result of addition: " << n1 + n2 << endl;
            break;
        case 2:
            cout << "Result of subtraction: " << n1 - n2 << endl;
            break;
        case 3:
            cout << "Result of multiplication: " << n1 * n2 << endl;
            break;
        case 4:
            if (n2 != 0)
                cout << "Result of division: " << n1 / n2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        case 5:
            cout << "Absolute value of " << n1 << " is " << abs(n1) << endl;
            cout << "Absolute value of " << n2 << " is " << abs(n2) << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
