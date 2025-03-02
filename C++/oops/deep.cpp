#include <iostream>
using namespace std;

class Test {
public:
    int* ptr;
    
    Test(int val) {
        ptr = new int(val);  // Dynamic allocation
    }

    // Deep copy constructor
    Test(const Test& other) {
        ptr = new int(*(other.ptr));
    }
    
    ~Test() { delete ptr; }  // Destructor deletes memory
};

int main() {
    Test t1(10);
    Test t2 = t1;  // Deep copy constructor is called

    delete t1.ptr; // Now `t2.ptr` is not affected
    cout << *(t2.ptr); // Safe to access `t2.ptr`
}