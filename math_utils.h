#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
  double length;
  double width;
};

struct Square
{
  double length;
};

namespace utils
{
  double
  area(double length, double width = 0);

  double area(Rectangle rectangle);

  double pow(double base, int pow = 2);
}

#endif