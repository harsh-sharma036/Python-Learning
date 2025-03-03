#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        void show(){
            cout<<"Class A"<<endl;
        }
};

class B{
    public:
        void show(){
            cout<<"Class B"<<endl;
        }
};

class C: public A, public B{
    public:
        void show(){
            cout<<"Class C"<<endl;
        }
};

int main(){
    // cout<<"Hello World"<<endl;
   
    C c;
    c.A::show();
    c.B::show();

    
    return 0;
}