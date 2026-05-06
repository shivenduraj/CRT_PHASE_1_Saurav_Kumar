#include<iostream>
using namespace std;

class Student{

    private:
    int reg_no = 100;

    public:
    //Data members
    string name;
    int roll_no;

    //Member function
    void display (){
        cout<<"Name: " << name << endl;
        cout <<"Roll No.: " << roll_no << endl;
        cout <<"Registration No.: " << reg_no << endl;
        reg_no++;

    } 
};

int main(){
    Student s1;
    s1.name = "Shivendu";
    s1.roll_no = 1385;
    s1.display();

    Student s2;
    s2.name = "Gaurav"; 
    s2.roll_no = 1386;
    s2.display();

    return 0;
}
