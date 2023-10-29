#include <iostream>

int main() {
    int x;
    std::cout << "zadejte cislo :3" << std::endl;
    std::cin >> x;
    if (x < 0) {
        std::cout << "absolutni hodnota se vynasobila -1: " << x*(-1) << std::endl;
    } else {
        std::cout << "absoulutni hodnota je: " << x << std::endl;
    }
    return 0;
}
