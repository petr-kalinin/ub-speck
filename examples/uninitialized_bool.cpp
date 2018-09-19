#include <iostream>

void foo() {
    bool b;
    if (b) 
        std::cout 
            << "b is true" 
            << std::endl;
    if (!b) 
        std::cout 
            << "b is not true" 
            << std::endl;
}
void bar() {
    char a = 12;
}
int main() {
    bar();
    foo();
    return 0;
}