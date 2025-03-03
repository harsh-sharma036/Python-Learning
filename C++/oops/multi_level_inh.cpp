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
   
    C c;
    c.show();
    return 0;
}