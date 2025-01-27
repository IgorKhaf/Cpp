#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Number of arguments: " << argc - 1 << std::endl;
    for (char** arg = argv + 1; arg < argv + argc; ++arg) {
        std::cout << "Argument " << (arg - argv) << ": " << *arg << std::endl;
    }
    return 0;
}