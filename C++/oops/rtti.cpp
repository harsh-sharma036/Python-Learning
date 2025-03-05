#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;

class base{
    public:
        virtual void show(){
            cout<<"Base class"<<endl;
        }
};

class derived : public base{
    public:
        void show(){
            cout<<"Derived class"<<endl;
        }
};

int main(){
    base *b = new derived();
    base *ptr = new derived();
    
    const type_info &ti = typeid(*ptr);
    cout<<ti.name()<<endl;
    // b->show();
    cout<<typeid(b).name()<<endl;    // iske output mai P  base ayega & 4 refers to the length of the string & P refers to the pointer
    cout<<typeid(*b).name()<<endl;  // iske output mai 8derived ayega & 7 refers to the length of the string
    return 0; 

}