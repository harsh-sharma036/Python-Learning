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
    // agar Class C mai show() function nhi isliye scope resolution operator use krke call krna padega to remove ambiguity
    c.A::show(); // this will call the show function of class A
    c.B::show(); // if we don't use scope resolution then it will give error as it is ambigious
    c.show(); // this will call the show function of class C

    
    return 0;
}