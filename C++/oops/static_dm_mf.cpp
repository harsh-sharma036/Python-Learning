#include <bits/stdc++.h>
using namespace std;

class person{
    static int count;
    int hash = 0; // non-static data member included in the size of the object
    public:
        // static int count;
        person(){
            count++;
        }
        static void getcount(){
            cout<<count<<endl;
        }
};

int person::count = 0;

int main(){
    // person::getcount();
    person p1;
    person::getcount();
    person p2;
    // person::getcount();
    person p3;
    p3.getcount();
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(person)<<endl;
    // person::getcount();
    return 0;
}