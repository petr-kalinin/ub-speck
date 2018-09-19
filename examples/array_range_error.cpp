#include <iostream>

int table[4] = {2, 4, 6, 8};

bool exists_in_table(int v)
{
    for (int i = 0; i <= 4; i++) {
        if (table[i] == v) return true;
    }
    return false;
}

int main() {
    for (int i=0; i<10; i++) {
        std::cout << i << " " << exists_in_table(i) << std::endl;
    }
    return 0;
}