#include <iostream>

void swapTwoNums(int *ptr1, int *ptr2){
  int x = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = x;
  return;
}

int main() {
  int x1 = 5;
  int x2 = 10;
  int *ptr1 = &x1;
  int *ptr2 = &x2;

  swapTwoNums(ptr1, ptr2);

  std::cout << "x1: " << x1 << std::endl;
  std::cout << "x2: " << x2 << std::endl;

  return 0;
}