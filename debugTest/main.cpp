#include <iostream>

void changeX(int *var){
  *var = 5;
}

int main(){
  int x = 10;
  changeX(&x);
  std::cout << x << std::endl;
  return 0;
}