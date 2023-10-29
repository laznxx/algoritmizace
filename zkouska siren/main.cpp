#include <iostream>

using namespace std;

int main() {
    int soucet, pocet;
    cout << "zadejte cislo: " << endl;
    cin >> pocet;
    for (int i = 1; i <= pocet; i++) {
        int cislo;
        cout << "zadejte cisla: " << endl;
        cin >> cislo;
        soucet += cislo;
    }
    cout << "prumer je: " << soucet / pocet << endl;
    return 0;
}
