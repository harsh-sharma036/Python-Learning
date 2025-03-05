#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    double b = 20.5;
    int c = static_cast<int>(b);
    cout<<b<<" "<<typeid(b).name()<<endl;
    cout<<c<<" "<<typeid(c).name()<<endl; // 20 i
    // cp
    return 0;
}

// C++ provides four types of casting operators, each with a specific purpose:

// Casting Operator	Usage	Safety	Works On
// static_cast	Compile-time type conversion	Safe (if types are compatible)	Primitives, upcasting in class hierarchy
// dynamic_cast	Safe downcasting in polymorphism	Safe (returns nullptr on failure)	Only polymorphic classes (virtual functions)
// const_cast	Adds or removes const or volatile qualifier	Unsafe if modifying const objects	Pointers & references
// reinterpret_cast	Converts one type to another, treating bits as-is	Dangerous (no type safety)	Pointers, bitwise type changes