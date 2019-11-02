#include <iostream>
#include "A.h"
#include "MainLevel.h"

int main() {
  MainLevel m("main level");
  A a("module a");

  std::cout << m.Value() << std::endl;
  std::cout << a.Value() << std::endl;

  return 0;
}