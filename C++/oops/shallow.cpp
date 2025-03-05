#include <iostream>
using namespace std;

class Test {
public:
    int* ptr;
    
    Test(int val) {
        ptr = new int(val);  // Dynamic allocation
    }
    
    ~Test() { delete ptr; }  // Destructor deletes memory
};

int main() {
    Test t1(10);
    Test t2 = t1;  // Default copy constructor (shallow copy)

    cout<<*(t1.ptr)<<endl;
    cout<<*(t2.ptr)<<endl;
    cout<<&t1.ptr<<endl;
    cout<<&t2.ptr<<endl;
    cout<<t1.ptr<<endl; // Same address
    cout<<t2.ptr<<endl; // Same address
    delete t1.ptr; // Now `t2.ptr` is a dangling pointer (dangerous!)
    cout << *(t1.ptr)<<endl; // Undefined behavior (program may crash)
    cout << *(t2.ptr)<<endl; // Undefined behavior (program may crash)
    cout<<&t1.ptr<<endl;
    cout<<&t2.ptr<<endl;
    cout<<t1.ptr<<endl; // Same address after deleting t1.ptr (dangling pointer)
    cout<<t2.ptr<<endl;     // Same address after deleting t1.ptr (dangling pointer)
    return 0;
}
