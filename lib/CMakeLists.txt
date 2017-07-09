set(TARGET_NAME lib)

add_library(${TARGET_NAME}
  interface.cpp
  pet.cpp
  dog.cpp)

# NOTE: Using VS variables with numbers in them does not seem to work 
set(MODULE_SEARCH_DIR
  "C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.10.25017/ifc/$(PlatformTarget)")

message(${MODULE_SEARCH_DIR})

target_compile_options(${TARGET_NAME}
  PUBLIC /experimental:module /module:interface /module:stdIfcDir ${MODULE_SEARCH_DIR})