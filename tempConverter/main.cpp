#include <iostream>

int main() {


  int f, c;
  char choice;


  std::cout << "Do you want to convert from Fahrenheit to Celsius? (Y/N - if otherwise): ";
  std::cin >> choice;


  if (choice == 'Y' || choice == 'y') {
    std::cout << "Temperature in Fahrenheit; ";
    std::cin >> f;

    c = (f - 32) * 5 / 9;

    std::cout << f << " degrees Fahrenheit = " << c << " degrees Celsius " << std::endl;}
  else {
    std::cout << "Temperature in Celsius: ";
    std::cin >> c;


    f = (c * 9 / 5) + 32;
    
    std::cout << c << " degrees Celsius = " << f << " degrees Fahrenheit" << std::endl;
  }
  return 0;
}