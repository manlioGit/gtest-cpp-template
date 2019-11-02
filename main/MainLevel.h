#pragma once

#include <string>

class MainLevel {
public:
  MainLevel(std::string value);
  std::string Value();

private:
  std::string value_;
};

