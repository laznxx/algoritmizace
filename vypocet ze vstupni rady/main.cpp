#include <iostream>

using namespace std;

int main() {
    int x, soucet;
    cout << "zadejte cisla: " << endl;

    while (x != -333) {
        soucet += x;
        cin >> x;
    }
    cout << "soucet je: " << soucet << endl;
    return 0;
}
