#include <iostream>

void f(const int& a) {
    const_cast<int&>(a) = 10;
    std::cout << "a=" << a 
        << std::endl;
}

const int a = 5;

int main() {
    std::cout << "a=" << a 
        << std::endl;
    f(a);
    std::cout << "a=" << a 
        << std::endl;
    return 0;
}