//write a cpp program that simulates a simple customer support system using switch case statement in that menu options are 1 for setup 2 for billing 3 for technical support and 4 or 0 to speak to an agent
#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Customer Support System" << endl;
    cout << "1. Setup" << endl;
    cout << "2. Billing" << endl;
    cout << "3. Technical Support" << endl;
    cout << "4 or 0. Speak to an Agent" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "You have selected Setup" << endl;
            break;
        case 2:
            cout << "You have selected Billing" << endl;
            break;
        case 3:
            cout << "You have selected Technical Support" << endl;
            break;
        case 4:
        case 0:
            cout << "You have selected to speak to an agent" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}