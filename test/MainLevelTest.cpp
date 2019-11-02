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

