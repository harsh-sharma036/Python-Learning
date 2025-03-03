#include <iostream>
using namespace std;

class CPU{
    public:
    string model;
    int ss;

    // public:
        CPU(string model){
            this->model = model;
        }

        void show(){
            cout<<"CPU Model: "<<model<<endl;
        }
    friend class computer;
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
    public:
    CPU c1;
    RAM r1;
    ROM m1;

        computer(CPU c, RAM r, ROM m): c1(c), r1(r), m1(m){
            cout<<"Computer is ready"<<endl;
        }

        void show(){
            c1.show();
            r1.show();
            m1.show();
        }

    friend class CPU;
    void exp(){
        c1.ss = 10;
    }
};


int main(){
    CPU c("Intel i5");
    RAM r(8);
    ROM m(1);

    computer comp(c, r, m);
    // comp.show();
   
    comp.c1.show();
    comp.c1.ss = 10;
    
    return 0;
}