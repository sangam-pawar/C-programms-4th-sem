#include<iostream>
using namespace std;

class prime {
public:

    int check(int x) {
        int i, p = 0;

        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                p = 1;
                break;
            }
        }
        return p;
    }
};

int main() {

    int x, p;

    cout << "Enter a number:";
    cin >> x;

    prime obj;
    p = obj.check(x);

    if (p == 0) {
        cout << "Number is prime:" << x;
    } else {
        cout << "Number is not prime:" << x;
    }

    return 0;
}
    