//write a function that takes length and breadth as input return and print the area of the rectangle
#include<iostream>
using namespace std;
double area ( double length, double breadth) {
    return length*breadth;
}
int main() {
    double length, breadth;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << area(length, breadth) << endl;
    return 0;
}