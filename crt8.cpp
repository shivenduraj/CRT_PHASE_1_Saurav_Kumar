//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string user1 = "admin"; 
    string pass1 = "password";
    string user2;
    string pass2;

    cout << "Enter username : ";
    cin >> user2;
    cout << "Enter password : ";
    cin >> pass2;

    if (user1 == user2 && pass1 == pass2) {
        cout << "Login Successfully";
        return 0;
    } else {
        cout << "Invalid username or password";
        return 1;
    }
}
