#include <iostream>
using namespace std;

class calci {
    public:
    inline int sum(int a = 0, int b = 0, int c = 0){
        return a+b+c;
    }
};

int main() {
    calci c;
    cout<<c.sum(1,2,3)<<endl;
    cout<<c.sum(1,2)<<endl;
    cout<<c.sum(1)<<endl;
    cout<<c.sum()<<endl;
    // cout<<c.sum(1,2,3,4)<<endl;  -> throws an error

    return 0;
}