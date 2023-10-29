#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int o;
    cin >> a >> b >> c;
    if (a+b>c && a+c>b && b+c>a) {
        o = a + b + c;
        cout << "Obvod trojuhelniku je:" << o << endl;

    }
        else {
            cout << "Nemuze byt trojuhelnik illuminat" << endl;
    };

    return 0;

}
