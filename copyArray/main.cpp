#include <iostream>

void arrayCopy()
{
  int source[] = {0,1,2,3,4};
  int dest[5];

  int* sp = source;

  for (int i=0; i<5; i++){
    dest[i]=*sp;
    sp++;
  }

  for (int i=0; i<5; i++)
  {
    std::cout << dest[i] << std::endl;
  }
}

int main() {
  arrayCopy();
  return 0;
}
