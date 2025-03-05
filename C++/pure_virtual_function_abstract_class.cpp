#include <bits/stdc++.h>
using namespace std;

class car{
    public:
    virtual void steering() = 0;
    virtual void brakes() = 0;
};

class bmw: public car{
    public:
    void steering(){
        // cout<<"BMW Steering"<<endl;
    }
    void brakes(){
        cout<<"BMW Brakes"<<endl;
    }
};

int main(){
    // car c;  // Error: cannot declare variable 'c' to be of abstract type 'car'
    bmw b;
    b.steering(); // No error
    b.brakes();
    return 0;
}