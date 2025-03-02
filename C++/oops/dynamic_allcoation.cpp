#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int a = 4;
    int *ptr = new int;
    *ptr = 10;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    delete ptr;
    // ptr = nullptr;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    // return 0;


    int *p = new int(10);
    delete p;
    p = nullptr;  // Safe practice to avoid dangling pointer

    if (p) {
        cout << *p << endl;  // Won't execute since p is nullptr
    } else {
        cout << "Pointer is null." << endl;  // Safe handling
    }
    

    return 0;
}