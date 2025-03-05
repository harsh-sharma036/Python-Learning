#include <bits/stdc++.h>
using namespace std;

class Complex{
    int real, imag;

    public:
        Complex(int r = 0, int i = 0){
            this->real = r;
            this->imag = i;
        }

        void print(){
            cout<<this->real<<" + "<<this->imag<<"i"<<endl;
        }

        Complex operator +(Complex ob){  // opertor overloading for dual operands
            Complex temp;
            temp.real = this->real + ob.real;
            temp.imag = this->imag + ob.imag;
            return temp;
        }


};

int main(){
    Complex c1(10, 5), c2(2, 4);
    Complex c3(1, 7);
    Complex c5;
    Complex c4;
    c4 = c1 + c2 + c3;
    c5 = c1 + c2;
    c4.print();
    c5.print();

    return 0;
}