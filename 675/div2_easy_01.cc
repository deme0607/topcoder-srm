#include <string>

// https://community.topcoder.com/stat?c=problem_statement&pm=14090&rd=16625

class LengthUnitCalculator
{
  public:
    double calc(int amount, std::string fromUnit, std::string toUnit);
  private:
    double weight(std::string unit);
};

double LengthUnitCalculator::weight(std::string unit)
{
  if (unit.compare("in") == 0) {
    return 1.0;
  } else if (unit.compare("ft") == 0) {
    return 12.0;
  } else if (unit.compare("yd") == 0) {
    return 12.0 * 3.0;
  } else if (unit.compare("mi") == 0) {
    return 12.0 * 3.0 * 1760;
  }
  return 0.0;
}

double LengthUnitCalculator::calc(int amount, std::string fromUnit, std::string toUnit)
{
  return amount * weight(fromUnit) / weight(toUnit);
}
