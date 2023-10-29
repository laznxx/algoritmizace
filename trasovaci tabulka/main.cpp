#include <iostream>

using namespace std;

int main() {
    int S = 0, C, P;
    cin >> P;
    for (P; P > 0; P--) {
        cin >> C;
        S += --C + P;
    }
    cout << S << "," << P << endl;
    return 0;
}
