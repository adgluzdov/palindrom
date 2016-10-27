#include <gtest/gtest.h>
#include <cstdlib>

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  int returnable = RUN_ALL_TESTS();
  system("pause");
  return returnable;
}