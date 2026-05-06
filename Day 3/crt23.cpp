//write a cpp program that takes a positive integer n as an input from the user then calculate its factorial for while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int fact = 1;
    int i = 1;
    while(i <= n){
        fact *= i;
        i++;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    return 0;
}
