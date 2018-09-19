#include <iostream>
void f(const int& a) {
    std::cout << "f:a=" << a 
        << std::endl;
    const_cast<int&>(a) = 10;
    std::cout << "f:a=" << a 
        << std::endl;
}

int main() {
    const int a = 5;
    std::cout << "main:a=" << a 
        << std::endl;
    f(a);
    std::cout << "main:a=" << a 
        << std::endl;
    f(a);
    std::cout << "main:a=" << a 
        << std::endl;
    return 0;
}