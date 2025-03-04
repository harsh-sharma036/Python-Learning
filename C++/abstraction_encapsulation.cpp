#include <bits/stdc++.h>
using namespace std;


class Wallet {
    private:
        int cash = 1000;  // Private data (cannot be accessed directly)
    
    public:
        void addMoney(int amount) { cash += amount; } // Controlled access
        int getCash() { return cash; } // Controlled access
    };

class ATM {
        public:
            virtual void withdrawMoney() = 0;  // Abstract function (user doesn’t see details)
        };
        
        class BankATM : public ATM {
        public:
            void withdrawMoney() override { cout << "Money withdrawn from ATM!" << endl; }
};

int main(){
    Wallet w;
    cout << "Current cash: " << w.getCash() << endl;
    w.addMoney(500);
    cout << "Current cash: " << w.getCash() << endl;

    BankATM b;
    b.withdrawMoney();
    
    return 0;
}
        