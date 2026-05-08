//Encapsulation
#include <iostream>
using namespace std;

class ATM{
    private:
    int balance;
    public:
    //Encapsulattion
    void setBalance(int balance){
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
    int getBalance(){
        return balance;
    }
};
int main(){
    int n;
    cin>>n;
    
    ATM a;
    a.setBalance(n);
    cout << "Balance is: " << a.getBalance() << endl;
    a.Withdraw(500);
    cout << "Balance is: " << a.getBalance() << endl;
    return 0;
}