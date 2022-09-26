#include<iostream>
using namespace std;

class Evenodd {
    int num;
public:

    void input() {
        cout << "Enter a number:";
        cin>>num;
    }

    void check() {
        if (num % 2 == 0) {
            cout << "Number is even:" << num;
        } else {
            cout << "Number is odd:" << num;
        }
    }
};

int main() {

    Evenodd tt;

    tt.input();
    tt.check();

    return 0;
}