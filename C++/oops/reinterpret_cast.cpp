#include <bits/stdc++.h>
using namespace std;    


int main(){
    int a = 97;
    int *ptr = &a;
    
    cout<<a<<endl;

    char *ch = reinterpret_cast<char*>(ptr);
    cout<<*ch<<endl;

    *ch = 'b';
    cout<<a<<endl;   // 98
    cout<<*ch<<endl; // b


    return 0;
}


// Quick Summary
// Casting Operator	Best Used For	Safety
// static_cast	Primitive conversions, upcasting	✅ Safe
// dynamic_cast	Safe downcasting in polymorphism	✅ Safe (returns nullptr)
// const_cast	Removing const for APIs	⚠ Unsafe if modifying const objects
// reinterpret_cast	Low-level pointer conversions	❌ Unsafe, use with caution
