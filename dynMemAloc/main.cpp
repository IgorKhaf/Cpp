#include <iostream>

char* createCharArray() {
  char *arrayPtr = new char[6];

  arrayPtr[0] = 'H';
  arrayPtr[1] = 'e';
  arrayPtr[2] = 'l';
  arrayPtr[3] = 'l';
  arrayPtr[4] = 'o';
  arrayPtr[5] = '\0';

  return arrayPtr;
}

int main(){
  char *mainArray = createCharArray();

  for (int i = 0; i<6; i++){
    std::cout << mainArray[i] << '\n';
  }

  delete[] mainArray;

  return 0;
}