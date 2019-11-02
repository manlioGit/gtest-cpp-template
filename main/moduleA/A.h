#pragma once

#include <string>

class A {
public:
  A(std::string value);
  std::string Value();

private:
  std::string value_;
};



