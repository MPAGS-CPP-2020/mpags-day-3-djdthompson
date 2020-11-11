#Build sub-script for the library for mpagscipher library

message("Hello, this tests that the cmakelists in sub-dir has succesfully been linked")

# - Declare the build of static MPAGSCipher library
add_library(MPAGSCipher STATIC
    TransformChar.hpp
    TransformChar.cpp
    ProcessCommandLine.cpp
    ProcessCommandLine.hpp
    CaesarCipher.hpp
    CaesarCipher.cpp
    CipherMode.hpp
  )

target_include_directories(MPAGSCipher
  PUBLIC ${CMAKE_CURRENT_LIST_DIR}
  )

target_compile_features(MPAGSCipher
  PUBLIC cxx_auto_type cxx_range_for cxx_uniform_initialization
  )
