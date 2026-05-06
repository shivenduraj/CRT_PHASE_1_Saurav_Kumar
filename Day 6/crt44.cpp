//
#include<iostream>
using namespace std;

class Criketers{
    public:

    //Data members
    string name;
    int runs;
    double avg;
    
    //Parameterized constructor
    Criketers(string n, int r, double avg){
        name = n;
        runs = r;
        this->avg = avg;
    }

    //Member function
    void show(){
        cout<<"Name: " << name << endl;
        cout <<"Runs: " << runs << endl;
        cout <<"Average: " << avg << endl;
    }
};

int main(){

    Criketers c1("Mahi", 5500, 45.4);
    c1.show();

    return 0;
}