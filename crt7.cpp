//write a cpp program that takes three integer as input from the user calculate their total sum and avg and print the result
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
    int sum = a + b + c;
    double avg = sum / 3;
    cout << "The total sum is: " << sum << endl;
    cout << "The average is: " << avg << endl;
    return 0;
}