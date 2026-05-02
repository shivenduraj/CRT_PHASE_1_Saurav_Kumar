//write a cpp program that takes 3 digiting integer as a input and find the largest among them using nested conditional statement
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
    if (a > b && a > c) {
        cout << "Largest number is: " << a;
    } 
    else {
        if (b > c) {
            cout << "Largest number is: " << b;
        } else {
            cout << "Largest number is: " << c;
        }
    }
    return 0;
}