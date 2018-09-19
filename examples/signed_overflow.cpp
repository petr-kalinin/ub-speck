#include <iostream>
#include <climits>

int foo ( int x) {
    return ( x+1 ) > x ;
}

int main ( void ) {
    std::cout 
        << ( (INT_MAX+1) > INT_MAX ) 
        << std::endl;
    std::cout 
        << foo ( INT_MAX ) 
        << std::endl;
    return 0;
}