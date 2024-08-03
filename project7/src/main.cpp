#include "head.h"

#include <iostream>

int main(int argc, char *argv[]) {
    
    int res = add(6, 3);
    std::cout << "6 + 3 = " << res << std::endl;

#ifdef DEBUG
    std::cout << "DEBUG STATUS..." << std::endl;
#endif

    return 0;
} 