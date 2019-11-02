file(GLOB srcs *.cpp)

ADD_EXECUTABLE(testMainLevel ${srcs})

TARGET_LINK_LIBRARIES(testMainLevel
  mainLevelDeps
  gtest_main
)

add_test(NAME testMainLevel
        COMMAND testMainLevel)