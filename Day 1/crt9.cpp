//write a program that takes the person name as input if person age as input is the age is 18 years older than it eligible
#include<iostream>
using namespace std;
int main(){
    string name;
    cout << "Enter name : ";
    cin >> name;
    int age;
    cout << "Enter age : ";
    cin >> age;
    if (age>=18){
        cout << "Eligible";
    }
    else{
        cout << "Not Eligible ";
    }
    return 0;
}