#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    int *ptr = &n;

    cout<<n<<endl; // value of n
    cout<<&n<<endl; // address of n
    cout<<*ptr<<endl; // value of n or value at address of n
    cout<<ptr<<endl;  // value of ptr or address of n
    cout<<&ptr<<endl; // address of ptr
   


    return 0;
}