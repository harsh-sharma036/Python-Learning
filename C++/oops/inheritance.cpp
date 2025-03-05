#include <bits/stdc++.h>
using namespace std;

class android{
    private:
        int test = 1;
    protected:
        int version = 13;
    public:
        void show(){
            cout<<"Android and my version is: "<<version<<endl;
        }
};

class samsung: public android{
    public:
        void show(){
            version = 14;
            cout<<"Samsung and my version is: "<<version<<endl;
        }
};

int main(){
    // cout<<"Hello World"<<endl;
    android a;
    // a.version = 2;
    a.show();
    a.show();
    samsung s;
    
    s.show();
    cout<<sizeof(samsung)<<endl;
    return 0;
}