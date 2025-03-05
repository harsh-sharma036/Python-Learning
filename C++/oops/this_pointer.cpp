#include <bits/stdc++.h>
using namespace std;

class Example {
    public:
        Example* getPointer() {
            return this;  // Returns address of current object
        }
    
        void show() {
            cout << "This object address: " << *this << endl;
        }

        friend ostream& operator<<(ostream& os, const Example& obj) {
            os << "Example object at address: " << &obj;  
            return os;
        }
        
    };
    
    int main() {
        Example obj;
        cout<<  obj << endl;
        obj.show();
        cout << "Returned pointer: " << obj.getPointer() << endl;  // Same address
        // Example* ptr = obj.getPointer();
        // cout << "Pointer address: " << ptr << endl;
        Example obj2;
        cout << obj2 << endl;
        obj2.show();
        cout << "Returned pointer: " << obj2.getPointer() << endl;  // Same address
        return 0;
    }
    

    // 1️⃣ How cout Works
    // The cout object in C++ is an instance of std::ostream. When you write:
    
    // cout << some_variable;
    // The compiler looks for an appropriate operator<< function that can handle the type of some_variable.
    // Some built-in types (like int, double, char*, etc.) already have predefined operator<< functions in the standard library. For example:
    
    // ✅ cout << 10; works because operator<<(int) is defined.
    // ✅ cout << 3.14; works because operator<<(double) is defined.
    // ✅ cout << "Hello"; works because operator<<(const char*) is defined.
    // However, for custom classes, cout does not know what to do unless you explicitly define an operator<< function.