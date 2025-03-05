#include <iostream>
using namespace std;

class abc{
    int* a;
public:
    abc(int x){
        a = new int(x);  // Dynamically allocate memory
    }

    // abc(abc &obj){
    //     a = obj.a;  // Shallow Copy! Both objects share the same memory
    // }

    abc(abc &obj){ // deep copy
        a = new int(*obj.a);  // Allocate new memory and copy value
    }
    

    void show(){
        cout << *a << endl;
    }

    void set(int x){
        *a = x;
    }
};


int main(){

    abc ob1(10);
    abc ob2 = ob1;
    ob1.show();
    ob2.show();
    ob2.set(20); // this will also update the value of ob1
    ob1.show(); 
    ob2.show();
    return 0;
}



