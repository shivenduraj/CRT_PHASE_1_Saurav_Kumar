//write a cpp program that takes two number and operator as input from the user perform the corresponding arithmetic operation and print the result
#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    char op;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    double result;
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0) {
                result = (double)a / b;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1;
    }
    cout << "Result: " << result << endl;
    return 0;
}