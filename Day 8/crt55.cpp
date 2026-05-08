//Abstraction
#include <iostream>
using namespace std;

class ATM{
    private:
    int balance;
    public:
    ATM(int balance){
        this->balance = balance;
    }
    //Withdraw method
    void Withdraw(int amount){
        if(amount > balance){
            cout << "Insufficient balance" << endl;
        }
        else{
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
    }
    //Show balance method
    void showBalance(){
        cout << "Current Balance: " << balance << endl;
    }
};
int main(){
    ATM a(5000);
    a.Withdraw(500);
    a.showBalance();

    return 0;
}