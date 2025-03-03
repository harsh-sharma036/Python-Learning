#include <bits/stdc++.h>
using namespace std;

class A{
    
    public:
    A(){
        cout<<"Constructor A"<<endl;
    }
        void show(){
            cout<<"Class A"<<endl;
        }
};

class B : virtual public A{
    
    public:
    B(){
        cout<<"Constructor B"<<endl;
    }
        void show(){
            cout<<"Class B"<<endl;
        }
};

class C : virtual public A{
    
    public:
    C(){
        cout<<"Constructor C"<<endl;
    }
        void show(){
            cout<<"Class C"<<endl;
        }
};

class D : public B, public C{
    public:
    D(){
        cout<<"Constructor D"<<endl;
    }
        void show(){
            cout<<"Class D"<<endl;
        }
};

int main(){
    // D d;   // Constructor A, Constructor B, Constructor A, Constructor C, Constructor D
    // d.show();
    D d; // Constructor A, Constructor B, Constructor C, Constructor D
    return 0;
}

