#include<iostream>
using namespace std;

namespace Mahi{
    void show(){
        cout << "Mahi is the part of CSK" << endl;
    }

}

namespace Virat{
    void show(){
        cout << "Virat is the part of RCB" << endl;
    }
}

namespace Rohit{
    void show(){
        cout << "Rohit is the part of MI" << endl;
    }
}

int main(){
    Mahi::show();
    Virat::show();
    Rohit::show();
    return 0;
}