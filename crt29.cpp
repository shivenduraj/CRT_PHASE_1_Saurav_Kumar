//
#include "iostream"
using namespace std;
int main() {
    int r; // 5 or i =2 j = 3 5 4 3 2
    cin>>r;
    for (int i = 1; i <= r; i++){
        for (int j = r; j > i ; j--){
            cout << " ";
        }for (int k=1; k<=i; k++){
            cout << " *" ;
        }
        cout << endl;
    }
    return 0;
}
