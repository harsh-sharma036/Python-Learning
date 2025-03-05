#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        void show(){
            cout<<"Class A"<<endl;
        }
};

class B: public A{
    public:
        void show(){
            cout<<"Class B"<<endl;
        }
};

class C: public B{
    public:
        void show(){
            cout<<"Class C"<<endl;
        }
};

int main(){
    // cout<<"Hello World"<<endl;
    C c,d;
    // B::d.show(); // wrong syntax for scope resolution
    c.show();
    c.B::show();
    c.A::show();
    return 0;
}