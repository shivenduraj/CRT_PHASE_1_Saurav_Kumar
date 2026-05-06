//swap two numbers using pointers
#include<iostream>
using namespace std;
void swap (int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"After swap: "<< a << " " << b << endl;
}