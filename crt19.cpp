//Write a cpp program that takes an integer as a input from the user print all the number between 1 to n that is divisible by 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Numbers between 1 to n = "<< n << " that are divisible by 2 are: ";
    for(int i=1; i<=n; i++){
        if (i%2==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;   
}