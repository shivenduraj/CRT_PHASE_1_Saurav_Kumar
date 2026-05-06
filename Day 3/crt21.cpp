//Write a cpp program that takes an integer as a input from the user print all the number between 1 to n that is divisible by 2 by while
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i = 1;
    while(i <= n){
        if(i % 2 == 0){
            cout << i << " ";
        }
        i++;
    }
    return 0;
}