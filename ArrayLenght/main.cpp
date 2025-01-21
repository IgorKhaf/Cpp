#include <iostream>

int arrayLength(char[]);

int main() {
    char arr[] = {'h', 'e', 'l', 'l', 'o', 'o', '\0'};
    std::cout << arrayLength(arr);
}

int arrayLength(char arr[] ) {
    int length = 0;
    while (arr[length] != '\0') {
        length++;
    }
    return length;
}