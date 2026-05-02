//write a cpp program that takes an integer as an input to print all number from 1 to n but skip any number that is multiple of 3 using continue statement
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if (i%3==0)
        {
            continue;
        }
        else
        {
            cout<<i<<" ";
        }
    }
    return 0;
}