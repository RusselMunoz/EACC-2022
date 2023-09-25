#include <iostream>
#include <iomanip>

int main() {
	//int,float,double,character,getline,cin,cin.ignore,
  // Declare variables
  int integer;
  float floatNumber;
  double doubleNumber;
  char character1, character2;
  std::string line;

  std::cout << "Company ";
   // Read in character input(Employee)
  std::cout << "Enter Employee's Name" << std::endl;
  std::getline(std::cin, character1)
  
  // Read in integer input(Age)
  std::cout << "Enter Age: ";
  std::cin >> integer;
  
  std::cout << "Postion: " << std::endl;
  std::getline(std::cin, character2)

  // Read in float input(Wage)
  std::cout << "Wage: ";
  std::cin >> floatNumber;

  // Read in double input(Yearly Salary)
  std::cout << "Yearly Salary: ";
  std::cin >> doubleNumber;

  // Ignore remaining characters in the input buffer
  std::cin.ignore();

  // Set the precision for float and double output
  std::cout << std::setprecision(3) << std::fixed << std::showpoint;

  // Output the values entered by the user
  std::cout << "Character: " << character << std::endl;
  std::cout << "Integer: " << integer << std::endl;
  std::cout << "Float: " << floatNumber << std::endl;
  std::cout << "Double: " << doubleNumber << std::endl;
  std::cout << "Line: " << line << std::endl;

  return 0;
}
