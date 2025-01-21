#include <iostream>

int main() {
    char name[] ={'i', 'g', 'o', 'r'};

    char *nameptr = name;

    nameptr[1] = 'z';

    std::cout << name;

    return 0;
}