#include <bits/stdc++.h>
using namespace std;

class base{
    public:
        virtual void show(){
            cout<<"Base class"<<endl;
        }
};

class d1 : public base{
    public:
        void show(){
            cout<<"Derived class 1"<<endl;
        }
};

class d2 : public base{
    public:
        void show(){
            cout<<"Derived class 2"<<endl;
        }
};

int main(){

    base *b = new d1();
    d1 *d = dynamic_cast<d1*>(b);
    d2 *ddd = dynamic_cast<d2*>(b);
    if(d){
        cout<<"Conversion successful"<<endl;
    }
    else{
        cout<<"Conversion unsuccessful"<<endl;
    }

    if(ddd){
        cout<<"Conversion successful"<<endl;
    }
    else{
        cout<<"Conversion unsuccessful"<<endl;
    }
    
    return 0;
}