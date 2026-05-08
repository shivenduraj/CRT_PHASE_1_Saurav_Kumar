//const member functions
#include <iostream>
using namespace std;

class Car{
    private:
    const int speed = 120;
    public:
    void show() const{
        // speed = 150; // This would cause a compilation error
        cout << speed << endl;
    }
};

int main(){
    Car c;
    c.show();
    return 0;
}