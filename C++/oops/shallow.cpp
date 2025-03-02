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

    delete t1.ptr; // Now `t2.ptr` is a dangling pointer (dangerous!)
    cout << *(t2.ptr); // Undefined behavior (program may crash)
}
