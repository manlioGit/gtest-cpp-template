file(GLOB srcs *.cpp)

ADD_EXECUTABLE(testModuleA ${srcs})

TARGET_LINK_LIBRARIES(testModuleA
  moduleA
  gtest_main
)

add_test(NAME testModuleA
        COMMAND testModuleA)