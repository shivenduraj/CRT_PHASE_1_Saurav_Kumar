//Eligible to vote program by while loop
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    while(age!=18){
        cout<<"Not Eligible to vote"<<endl;
        cout<<"Enter your age: ";
        cin>>age;
    }
    cout<<"Eligible to vote"<<endl;
    return 0;
}