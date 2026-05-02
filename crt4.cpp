//write a cpp program that takes two integer input a and b multiply a by 4 using bitwise left shift operator print the value of a
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    a = a << 2; // Multiply a by 4 using bitwise left shift operator
    cout << "The value of A after multiplying by 4 is: " << a << endl;
    //b = a >> 2; // Divide a by 4 using bitwise right shift operator
    //cout << "The value of B after dividing by 4 is: " << b << endl;
    return 0;
}
