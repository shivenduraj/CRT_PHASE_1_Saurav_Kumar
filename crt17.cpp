//write a cpp that takes a single alphabet as a input from the user and determine whether it is vowel or not
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a alphabet: ";
    cin >> ch;
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << ch << " is a vowel.";
            break;
        default:
            cout << ch << " is not a vowel.";
    }
    return 0;
}