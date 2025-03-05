#include <bits/stdc++.h>
using namespace std;
    

class A{
    public:
        void show(){
            cout<<"Class A"<<endl;
        }
};

class B : public A{
    public:
        void show(){
            cout<<"Class B"<<endl;
        }
};

class c : public A{
    public:
        void show(){
            cout<<"Class C"<<endl;
        }
};

int main(){
    c obj1;
    obj1.show(); // Class C
}