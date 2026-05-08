//write a cpp program to create student mgmt system wtorhere we store and display the student details 1 name 2 roll no 3 reg 4 email 5 phn 6 marks/grade using parameterized and default constructor
#include<iostream>
using namespace std;
class Student{
    public:
    //data members
    string name;
    int roll_no;
    int reg_no;
    string email;
    int phn;
    char grade;

    //default constructor
    Student(){
        name = "Shivendu";
        roll_no = 1385;
        reg_no = 100;
        email = "abc@gmail.com";
        phn = 1234567890;
        grade = 'A';
    }
    //parameterized constructor
    Student(string n, int r, int reg, string e, int p, char g){
        name = n;
        roll_no = r;
        reg_no = reg;
        email = e;
        phn = p;
        grade = g;
    }
    //member function
    void show(){
        cout<<"Name: " << name << endl;
        cout <<"Roll No.: " << roll_no << endl;
        cout <<"Registration No.: " << reg_no << endl;
        cout <<"Email: " << email << endl;
        cout <<"Phone No.: " << phn << endl;
        cout <<"Grade: " << grade << endl;
    }
};  
int main(){
    Student s1;
    s1.show();

    Student s2("Gaurav", 1386, 101, "gaurav@gmail.com", 9876543210, 'B');
    s2.show();

    return 0;
}
