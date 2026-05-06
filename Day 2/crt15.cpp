//write a cpp program that takes student percentage bw 0 to 100 as input and calculate their grade based on the following criteria : 90 and above Grade A, 80 to 89 Grade B, 70 to 79 Grade C, 60 to 69 Grade D and below 60 Fail
#include<iostream>
using namespace std;
int main(){
    double percentage;
    cout << "Enter student percentage (0 to 100): ";
    cin >> percentage;
    if (percentage >= 90) {
        cout << "Grade: A";
    } else if (percentage >= 80) {
        cout << "Grade: B";
    } else if (percentage >= 70) {
        cout << "Grade: C";
    } else if (percentage >= 60) {
        cout << "Grade: D";
    } else {
        cout << "Fail";
    }
    return 0;
}