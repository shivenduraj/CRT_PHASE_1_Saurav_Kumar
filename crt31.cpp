//with argument without return type
#include <iostream>
#include <string>
using namespace std;

string msg() {
	return "Hello"; 
}

int main() {
    string ans = msg();
    cout << ans << endl;
    return 0;
}