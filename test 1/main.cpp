#include <iostream>
using namespace std;
// Vstup je tvořen čísly A0 a Q.
// Číslo A0 představuje první člen geometrické posloupnosti, Q je její kvocient.
// Za předpokladu, že řada konverguje k nule (členy se postupně zmenšují k nule),
// vypočtěte součet této posloupnosti s přesností 2×10–6.

int main() {
    float A0, Q;
    int poc = 0;
    A0  = 10;
    Q = 0.5;
    float vys;
    while(A0 > 0.000001){
    vys += A0;
    poc++;
    cout << "vypisssss: " << vys << "  " << poc << endl;
    A0 *= Q;
    }
    cout << "vypisssss: " << vys << endl;

    return 0;
}
