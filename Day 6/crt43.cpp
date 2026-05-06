//construcor
#include<iostream>
using namespace std;

class Student{
    //Data member
    public:
    string name;
    int roll_no;

    //Default constructor
    Student(){
        name = "Shivendu";
        roll_no = 1385;
    }

    //print
    void show(){
        cout<<"Name: " << name << endl;
        cout <<"Roll No.: " << roll_no << endl;
        cout<<"Default constructor is called" << endl;
    
    }
};

int main(){

    Student s1;
    s1.show();

    return 0;
}