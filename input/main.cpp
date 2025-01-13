#include <iostream>

int main()
{
int workDays =5;
float workHours =7.5;
float payRate, weeklyPay;

std::cout << "What is the hourly pay rate?";
std::cin >> payRate;

weeklyPay = workDays*workHours*payRate;

std::cout << "Weekly Pay = ";
std::cout << weeklyPay;
std::cout << "\n";


return 0;
}