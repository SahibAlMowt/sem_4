#include "doctest.h"
#include "zadaca.h"

TEST_CASE("str")
{
  std::string str1 = "12.12.1221 12:12";
  CHECK(reg(str1));
}