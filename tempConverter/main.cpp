#include <iostream>

int main() {

  // variable declaration
  int f, c;
  char choice;

  // user input
  std::cout << "Do you want to convert from Fahrenheit to Celsius? (Y/N - if otherwise): ";
  std::cin >> choice;

  // if user wants to convert from Fahrenheit to Celsius
  if (choice == 'Y' || choice == 'y') {
    std::cout << "Temperature in Fahrenheit; ";
    std::cin >> f;

    // formula for conversion
    c = (f - 32) * 5 / 9;

    std::cout << f << " degrees Fahrenheit = " << c << " degrees Celsius " << std::endl;}
  else {
    std::cout << "Temperature in Celsius: ";
    std::cin >> c;

    // formula for conversion
    f = (c * 9 / 5) + 32;
    
    std::cout << c << " degrees Celsius = " << f << " degrees Fahrenheit" << std::endl;
  }
  return 0;
}