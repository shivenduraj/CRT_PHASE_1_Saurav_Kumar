//write a cpp program that takes an integer input representing a person age used an else if ladder to determine print eligible to vote when more than 100 (2) eligible to 18 to 99 and (3) not eligible to vote if age is 0-17 and invalid age is negative
#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter age : ";
    cin >> age;
    if (age>=18){
        if (age>=100){
            cout << "Eligible but check";
        }
        else {
            cout << "Eligible to Vote";
        }
    }
    else{
        if (age>=0 && age<=170){
            cout << "Not Eligible to Vote";
        }
        else{
            cout << "Invalid age";
        }

    }
    return 0;
}