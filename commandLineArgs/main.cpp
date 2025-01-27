#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  // cout << "argc: " << argc << endl;
  cout << "Executable name is " << *argv << endl;
  argv++;
  for (int i = 1; i < argc; i++) {
    cout << "arg" << i << " is: " << *argv << endl;
    argv++;
  } 

  return 0;
}