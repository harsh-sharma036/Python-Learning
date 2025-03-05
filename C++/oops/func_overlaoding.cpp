#include <iostream>
using namespace std;

class calculator{
    public:
        int add(int a, int b){
            cout<<"Int_2"<<endl;
            return a+b;
        }
        // as function can't be overloaded by return type
        // float add(int a, int b){     // this will give error
        //     cout<<"Int_Float"<<endl;
        //     return a+b;
        // }

        int add(int a, int b, int c){
            cout<<"Int_3"<<endl;
            return a+b+c;
        }

        double add(double a, double b){
            cout<<"Double"<<endl;
            return a+b;
        }

        float add(float a, float b){
            cout<<"Float"<<endl;
            return a+b;
        }
};

int main(){
    calculator c;
    cout<<c.add(2,3)<<endl;
    cout<<c.add(2,3,4)<<endl;
    cout<<c.add(2.5,3.5)<<endl;
    cout<<c.add(2.8f,3.6f)<<endl; // f is used to specify float

    return 0;
}