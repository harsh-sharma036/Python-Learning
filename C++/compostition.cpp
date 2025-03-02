#include <iostream>
using namespace std;

class CPU{
    string model;

    public:
        CPU(string model){
            this->model = model;
        }

        void show(){
            cout<<"CPU Model: "<<model<<endl;
        }
};

class RAM{
    int size;
    public:
        RAM(int size){
            this->size = size;
        }

        void show(){
            cout<<"RAM Size: "<<size<<" GB"<<endl;
        }
};

class ROM{
    int size;
    public:
        ROM(int size){
            this->size = size;
        }

        void show(){
            cout<<"ROM Size: "<<size<<" TB"<<endl;
        }
};

class computer{
    CPU c;
    RAM r;
    ROM m;

    public:
        computer(CPU c, RAM r, ROM m): c(c), r(r), m(m){
            cout<<"Computer is ready"<<endl;
        }

        void show(){
            c.show();
            r.show();
            m.show();
        }
};


int main(){
    CPU c("Intel i5");
    RAM r(8);
    ROM m(1);

    computer comp(c, r, m);
    comp.show();
    return 0;

}