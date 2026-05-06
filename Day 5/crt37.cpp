//write a function with default argument and calling it with or without parameters
#include<iostream>
using namespace std;

int add ( int a, int b=4) {
    return a+b;
}

int main() {
    cout<<"Sum : "<<add(5)<<endl;
    cout<<"Sum 2 : "<< add(5,8)<<endl;
    return 0;
}