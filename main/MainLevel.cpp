#include "MainLevel.h"

MainLevel::MainLevel(std::string value)
  : value_(value)
  {
  }

std::string MainLevel::Value() {
  return value_;
}
