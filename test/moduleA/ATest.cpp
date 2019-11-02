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
