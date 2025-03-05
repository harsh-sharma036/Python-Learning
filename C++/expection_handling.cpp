#include <iostream>
using namespace std;

int main(){

    int a, b;
    int res =0;

    try
    {
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
        if(b==0){
            // throw runtime_error("Division by zero");
            throw 1.11;
        }
        res = a/b;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(int x)
    {
        cout<<"Division by zero"<<endl;
    }
    catch(...)
    {
        cout<<"Some error occured"<<endl;
    }

    cout<<"Result: "<<res<<endl;
    

    return 0;
}