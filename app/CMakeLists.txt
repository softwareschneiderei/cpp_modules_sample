set(TARGET_NAME app)

add_executable(${TARGET_NAME}
  main.cpp)

# NOTE: Using VS variables with numbers in them does not seem to work 
set(MODULE_SEARCH_DIR
  "C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.10.25017/ifc/$(PlatformTarget)")

message(${MODULE_SEARCH_DIR})

target_link_libraries(${TARGET_NAME}
  lib)

target_compile_options(${TARGET_NAME}
  PUBLIC /experimental:module /module:stdIfcDir ${MODULE_SEARCH_DIR} /module:search ../lib/)