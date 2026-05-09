//const member functions
#include <iostream>
using namespace std;

class Car{
    private:
    int speed = 120; //int speed;
    public:
    Car() {
        speed = 120;
    }
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