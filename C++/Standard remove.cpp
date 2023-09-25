#include <sstream>
#include <string>

int main() {
  std::string wage_string;
  float wage;
  std::cout << "Enter the wage: ";
  std::getline(std::cin, wage_string);
  wage_string.erase(std::remove(wage_string.begin(), wage_string.end(), ','), wage_string.end());
  std::stringstream(wage_string) >> wage;
  std::cout << "The wage is: " << wage << std::endl;
  return 0;
}
