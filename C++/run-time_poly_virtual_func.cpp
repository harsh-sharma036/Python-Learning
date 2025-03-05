// What Does override Do?
// When you use override, the compiler ensures that the function is actually overriding a virtual function from the base class.
// If there is a typo or a mismatch in the function signature, the compiler will generate an error.

// Example Without override (Potential Bug)

// class Car {
// public:
//     virtual void startEngine() {  // Virtual function
//         cout << "Starting a generic car engine" << endl;
//     }
// };

// class Tesla : public Car {
// public:
//     void startengine() {  // Oops! Small typo (should be 'startEngine')
//         cout << "Starting Tesla's silent electric engine" << endl;
//     }
// };
// Expected behavior: Tesla's startengine() should override the base class's startEngine().
// Actual behavior: The function in Tesla does not override because the function name is incorrect (lowercase 'e').
// Since no override was used, the compiler does not give an error—instead, it treats startengine() as a new function.

// Fix Using override
// class Tesla : public Car {
// public:
//     void startengine() override {  // Error: No function in base class with this name
//         cout << "Starting Tesla's silent electric engine" << endl;
//     }
// };
// Now, the compiler throws an error because startengine() does not match startEngine().
// This helps prevent accidental mistakes!

// Is override Necessary?
// 🔹 Not mandatory, but highly recommended.
// 🔹 Helps catch errors at compile time if you accidentally change a function signature.
// 🔹 Improves code readability by clearly indicating that a function is overriding a base class method.

// Final Answer for an Interview
// 👉 "The override keyword is not required, but it ensures that a function is actually overriding a virtual function from the base class.
//     This helps catch errors at compile time if there is a typo or mismatch in function signatures, making the code safer and more readable." 🚀


#include <iostream>
using namespace std;

class TV {
public:
    virtual void powerOn() {  // Virtual function
        cout << "Generic TV Powering On" << endl;
    }
};

class Samsung : public TV {
public:
    void powerOn() override {  // Overrides the base class function
        cout << "Samsung TV Turning On" << endl;
    }
};

class LG : public TV {
public:
    void powerOn() override {  // Overrides the base class function
        cout << "LG TV Turning On" << endl;
    }
};

int main() {
    TV* remote;  // Base class pointer
    Samsung s;
    LG l;



    remote = &s;
    remote->powerOn();  // Calls Samsung's function

    remote = &l;
    remote->powerOn();  // Calls LG's function
    
    // Samsung *s1;
    // s1 = &s;
    // s1->powerOn();

    return 0;
}
