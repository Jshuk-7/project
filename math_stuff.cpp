#include <iostream>
#include "math_utils.h"

int main()
{
  Rectangle rectangle;
  rectangle.length = 10;
  rectangle.width = 10;
  std::cout << utils::pow(3, 3) << std::endl;
  std::cout << utils::pow(3) << std::endl;
  std::cout << utils::pow(5, 3) << std::endl;
  return 0;
}