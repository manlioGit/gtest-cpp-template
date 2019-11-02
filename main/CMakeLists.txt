file(GLOB main_level_src MainLevel.*)
add_library(mainLevelDeps STATIC
  ${main_level_src}
)

target_include_directories(mainLevelDeps PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)

set(main_src
  main.cpp
)

add_executable(template
 ${main_src}
)

# Specify here the libraries this program depends on
target_link_libraries(template
  mainLevelDeps
  moduleA
)

install(TARGETS template DESTINATION bin)