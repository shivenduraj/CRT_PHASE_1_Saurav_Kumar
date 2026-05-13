// //
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i=1; i<=10 ; i++){
//         cout << i << " ";
//     }
//     cout << endl;
// }

//Recursion
#include <iostream>
using namespace std;

int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fact(n - 1);
};
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = fact(n);
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}