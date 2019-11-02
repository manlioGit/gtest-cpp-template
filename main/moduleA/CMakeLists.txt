file(GLOB module_a_src *.h *.cpp)

# Declare the library
add_library(moduleA STATIC
  ${module_a_src}
)

# Specify here the include directories exported
# by this library
target_include_directories(moduleA PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)