#include <gtest/gtest.h>
#include "A.h"

class ModuleATest : public ::testing::Test {

protected:
  void SetUp() override {
  }

  void TearDown() override {

  }
};

TEST_F(ModuleATest, value){
  A a("a");

  ASSERT_EQ("a", a.Value());
}
