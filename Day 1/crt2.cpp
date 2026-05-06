//write a cpp program that declares as global integer variable initialize to 100 in the main function take that integer input from the user perform floating point division of the global variable by the user input using explicit type casting store it in a local double variable and print the result
#include<iostream>
using namespace std;
    
int global_var = 100;

int main() {
    int user;
    cout << "Enter an integer: ";
    cin >> user;
    double result = (double)global_var / user;
    cout << "The result is: " << result << endl;
    return 0;

}