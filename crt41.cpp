#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll_no;
    void display (){
        cout<<"Name: " << name << endl;
        cout <<"Roll No.: " << roll_no << endl;
    } 
};

int main(){
    Student s1;
    s1.name = "Shivendu";
    s1.roll_no = 1385;
    s1.display();

    return 0;
}