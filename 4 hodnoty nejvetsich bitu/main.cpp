#include <iostream>
using namespace std;

int main() {
    char x;
    cin.get(x);
    for (int i = 7; i > 3; i--) cout << ((x >> i) & 1);
    return 0;
}
