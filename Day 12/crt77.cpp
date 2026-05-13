//Sum of digits
#include<iostream>
using namespace std;
int sumofDigits(int x){
    if (x == 0){
        return 0;
    }
    return (x % 10) + sumofDigits(x / 10);
};

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = sumofDigits(n);
    cout << "Sum of digits is: " << ans << endl;
    return 0;
}