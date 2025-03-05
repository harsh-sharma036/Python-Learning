#include <bits/stdc++.h>
using namespace std;

class weight{
    int kg;
    public:
        weight(int x = 0){
            this->kg = x;
        }

        void show(){
            cout<<"Weight: "<<kg<<" kg"<<endl;
        }

        // unary operator overloading
        void operator --(){    // pre-decrement
            // --kg;
            // kg = -kg;
            // return weight(kg);
            --this->kg;
        }
        void operator --(int){  // post-decrement
            this->kg--;
        }
        // void operator ++(){    // pre-increment
        //     ++this->kg;
        // }
        void operator ++(int){  // post-increment
            this->kg++;
        }

        weight operator ++(){
            // return weight(++kg);
            // return weight(-kg);
            weight temp;
            temp.kg = ++this->kg;
            return temp;
        }
};

int main(){
    weight w(10);
    w.show();
    // --w;
    // w.show();

    weight w1;
    w1 = ++w;
    w1++;
    w1.show();

    return 0;
}