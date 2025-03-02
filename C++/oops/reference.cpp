#include <bits/stdc++.h>
using namespace std;

void change(int &x){
    x = 10;
}

int main(){

    int exp = 5;
    cout<<exp<<endl;
    change(exp);
    cout<<exp<<endl;
    return 0;
}