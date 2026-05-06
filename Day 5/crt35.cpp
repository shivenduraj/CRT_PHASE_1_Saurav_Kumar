//Pointers
#include<iostream>
using namespace std;
int main (){
    int value =10;
    int *ptr=&value;

    cout<<"Add;" <<ptr<<endl;
    cout<<"Values:" <<*ptr<<endl;

    *ptr=20;
    cout<<"Values:" <<*ptr<<endl;

    return 0;
}