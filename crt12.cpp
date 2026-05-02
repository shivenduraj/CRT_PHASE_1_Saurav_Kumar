//write a cpp program that takes 2 integer as a input from the user find the maximum of two using ternary conditional operator
#include<iostream>
using namespace std;
int main (){
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    if (a>b){
        cout << "A is large";
    }
    else {
        cout << "B is large";
    }
    int max = (a > b) ? a : b; // Using ternary
    cout << "The maximum of " << a << " and " << b << " is: " << max << endl;
    return 0;
}