#include<iostream>
using namespace std;

class Area{
    public:
    int length;
    int breadth;

    Area(){
        length = 0;
        breadth = 0;
    }

    //Parameterized constructor

    Area (int l, int b){
        this->length = l;
        breadth = b;
    }

    Area (int s){
        length = s;
        breadth = s;
    }

    void show(){
        cout<<"Area is: " << length * breadth << endl;
    }
};

int main(){

    Area a1;
    a1.show();
    Area a2(5, 10);
    a2.show();
    Area a3(18);
    a3.show();

    return 0;
}