#include "calc.h"

#include <iostream>

int main(int argc, char *argv[]) {
    int a = 6, b = 3, res = 0;

    res = add(a, b);
    std::cout << a << " + " << b << " = " << res << std::endl;

    res = sub(a, b);
    std::cout << a << " - " << b << " = " << res << std::endl;

    res = mul(a, b);
    std::cout << a << " * " << b << " = " << res << std::endl;

    res = divi(a, b);
    std::cout << a << " / " << b << " = " << res << std::endl;

    return 0;
} 