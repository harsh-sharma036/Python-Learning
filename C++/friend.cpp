#include <iostream>
using namespace std;

class shravani;  // Forward declaration

class harsh {
    string topsecret = "this is a secret";

public:
    void show_2(shravani s);  // Declaration only

    friend class shravani;
    friend void show(harsh h);
};

class shravani {
    string secret = "yeh mera raaz hai";

public:
    void show_1(harsh h) {
        cout << h.topsecret << endl;
    }

    friend class harsh;
};

// Now defining show_2() after shravani is fully known
void harsh::show_2(shravani s) {
    cout << s.secret << endl;
}

void show(harsh h) {
    cout << h.topsecret << endl;
}

int main() {
    harsh h;
    shravani s;
    s.show_1(h);
    h.show_2(s);
    
    // show(h);
    // okay agya smjh revision-1 5th march
    return 0;
}
