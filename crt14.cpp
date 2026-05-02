//write a cpp program that continuously takes positive integer from the user and add them to running sum variable if the user enter an negative number immediately terminate the loop using break statemmnt
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    while (true)
    {
        int n;
        cout<<"Enter a positive integer (negative to stop): ";
        cin>>n;
        if (n<0)
        {
            break;
        }
        sum+=n;
    }
    
}