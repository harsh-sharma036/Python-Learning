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

    // In your code, the dynamic_cast operation for d2 is unsuccessful because the object b
    // is actually of type d1, not d2. The dynamic_cast operator checks the actual type of the
    // object at runtime and only succeeds if the cast is valid.
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
        cout<<"Conversion unsuccessful"<<endl; //why this is printed
    }
    
    return 0;
}