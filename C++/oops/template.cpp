#include <bits/stdc++.h>
using namespace std;


// Declaration
template <typename T>
T multiply(T a, T b);

// Definition
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

template <typename T>
class Test {
private:
    T data;       // T is a template type
    int id;       // Predefined data type (int)
public:
    Test(T d, int i){
        this->data = d;
        this->id = i;
    }

    void show() {
        cout << "Data: " << data << ", ID: " << id << endl;
    }
};

int main() {
    Test<int> obj1(100, 1);
    Test<double> obj2(45.6, 2);

    obj1.show(); // Works with int
    obj2.show(); // Works with double

    cout << multiply(4, 5) << endl;       // Works with int
    cout << multiply(3.2, 2.5) << endl;   // Works with double

    return 0;
}
