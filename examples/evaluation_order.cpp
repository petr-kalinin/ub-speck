#include <iostream>

void foo(int a, int b) {
}

int bar() {
    std::cout << "bar()" << std::endl;
    return 10;
}

int buz() {
    std::cout << "buz()" << std::endl;
    return 20;
}

int main() {
    foo(bar(), buz());
    return 0;
}