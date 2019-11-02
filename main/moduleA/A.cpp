#include "A.h"

A::A(std::string value)
  : value_(value)
  {}

std::string A::Value() {
  return value_;
}
