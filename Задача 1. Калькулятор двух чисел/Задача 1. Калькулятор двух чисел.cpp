// Задача 1. Калькулятор двух чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы
#include <iostream>
#include <windows.h>

class Calculator {
private:
  double num1, num2;
public:
   bool set_num1(double num1) {
      if (num1 != 0) 
      {
         this->num1 = num1;
         return true;
      }
      else {
         std::cout << "Неверный ввод" << std::endl;
         return false;
      }
   }
   bool set_num2(double num2) {
      if (num2 != 0) {
         this->num2 = num2;
         return true;
      }
      else {
         std::cout << "Неверный ввод" << std::endl;
         return false;
      }
   }
   double add() {
         return num1 + num2;
   }
   double multiply() {
      return num1 * num2;
      } 
   double subtract_1_2() {
      return num2 - num1;
      } 
   double subtract_2_1() {
      return num1 - num2;
      } 
   double divide_1_2() {
         return num1 / num2;
      } 
   double divide_2_1() {
            return num2 / num1;
      }
  
};

void set_num( Calculator &calc, double &num1, double &num2) {
   while (!num1) {
      std::cout << "Введите num1: " ;
      std::cin >> num1;
      if (!calc.set_num1(num1))
         continue;
      while (!num2) {
         std::cout << std::endl << "Введите num2: ";
         std::cin >> num2;
         if (!calc.set_num2(num2));
      }
   }
}

void print_fun(Calculator& calc) {
   std::cout << "num1 + num2 = " << calc.add() << std::endl << "num1 - num2 = " << calc.subtract_2_1() << std::endl
      << "num2 - num1 = " << calc.subtract_1_2() << std::endl << "num1 * num2 = " << calc.multiply() << std::endl
      << "num1 / num2 = " << calc.divide_1_2() << std::endl << "num2 / num1 = " << calc.divide_2_1() << std::endl;
}

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   Calculator calc;
   double num1{}, num2{};
   set_num(calc, num1, num2);
   print_fun(calc);

   return 0;
}

