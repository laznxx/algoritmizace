#include <iostream>

using namespace std;

int main() {
    int n, kladna;
    cout << "zadejte pocet cisel: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int cislo;
        cout << "zadejte cisla: " << endl;
        cin >> cislo;
        if (cislo > 0) {
            kladna++;
        }
    }
    cout << "vypis pocet kladnych cisel: " << kladna << endl;

    return 0;
}
