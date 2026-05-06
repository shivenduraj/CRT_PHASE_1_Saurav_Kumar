//write a cpp program that take two integers as input from the user swap their values using a temporary variable and print the updated variable
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping, A: " << a << ", B: " << b << endl;
    return 0;
}