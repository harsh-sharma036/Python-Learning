// const cast const variable ki constantness ko remove krne mai help krta hai

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    const int *ptr = &a;
    // *ptr = 20;  // Error: assignment of read-only location

    cout<<a<<endl;
    cout<<*ptr<<endl;
    // *ptr = 20;  // Error: assignment of read-only location
    int *pt = const_cast<int*>(ptr);
    *pt = 20;
    cout<<a<<endl;
    cout<<*pt<<endl;    
    cout<<*ptr<<endl;
    return 0;
}