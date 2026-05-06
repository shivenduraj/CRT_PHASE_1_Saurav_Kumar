//write a function that apply 10% discount using references and print the updated bill
#include<iostream>
using namespace std;

void applydis ( double& bill) {
    bill = bill - (bill*0.1);
}

int main() {

    double bill;
    cout<<"Enter bill amount: ";
    cin >> bill;
    
    applydis(bill);
    cout<<"Total bill after 10 percent discount is : "<< bill << endl;
    return 0;
}