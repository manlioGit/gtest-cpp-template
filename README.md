# gtest-cpp-template

project template to quick start with gtest and modules

## Project Structure

gtest-cpp-template
+--main
|  +--moduleA
|     +--A.h.cpp
|  +--main.cpp
|  +--MainLevel.h/cpp
|
+--test
|  +--moduleA
|     +--ATest.cpp
|  +--MainLevelTest.cpp

## examples

### MainLevelTest

```cpp
#include "gtest/gtest.h"
#include "MainLevel.h"

class MainLevelTest : public ::testing::Test {
protected:
  void SetUp() override {
  }

  void TearDown() override {
  }
};

TEST_F(MainLevelTest, value){
  MainLevel m("m");

  ASSERT_EQ("m", m.Value());
}
```

### moduleA/ATest

```cpp
#include <gtest/gtest.h>
#include "A.h"

class ATest : public ::testing::Test {

protected:
  void SetUp() override {
  }

  void TearDown() override {

  }
};

TEST_F(ATest, value){
  A a("a");

  ASSERT_EQ("a", a.Value());
}
```