//
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
    if (a+b+c == 180) {
        if (a==b && b==c) {
            cout << "True";
        }
        else{
            cout << "False";
        }
    }
    else {
        cout << "This is not a triangle";
    }

}