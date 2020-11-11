# - Main CMake buildscript for mpags-cipher
# Comments in a CMake Script are lines begining with a '#'

# - Set CMake requirements then declare project
cmake_minimum_required(VERSION 3.2)
project(MPAGSCipher VERSION 0.3.2)

# - When Makefiles are generated, output all command lines by default
#   Do this to begin with so it's easy to see what compiler command/flags
#   are used. This can also be done by removing the 'set' command and
#   running make as 'make VERBOSE=1'.
set(CMAKE_VERBOSE_MAKEFILE ON)

#set the standard C++ library
set(CMAKE_CXX_STANDARD 11)

# - Don't allow C++ Compiler Vendor Extensions
set(CMAKE_CXX_EXTENSIONS OFF)

# - Use our standard set of flags
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wfatal-errors -Wshadow -pedantic")

# - Add the MPAGSCipher subdie to the build for program auto-testing
add_subdirectory(MPAGSCipher)

# enable and add testing subdir
enable_testing()
add_subdirectory(Testing)


#don't require the remaining source files now as they are included in mpagscipher subdir
# - Declare the build of mpags-cipher main program
add_executable(mpags-cipher
  mpags-cipher.cpp
  # MPAGSCipher/TransformChar.hpp
  # MPAGSCipher/TransformChar.cpp
  # MPAGSCipher/ProcessCommandLine.cpp
  # MPAGSCipher/ProcessCommandLine.hpp
  # MPAGSCipher/CaesarCipher.hpp
  # MPAGSCipher/CaesarCipher.cpp
  # MPAGSCipher/CipherMode.hpp
  )

# target_include_directories(mpags-cipher
#   PRIVATE MPAGSCipher
#   )

# target_compile_features(mpags-cipher
#   PRIVATE cxx_auto_type cxx_range_for cxx_uniform_initialization
#   )

#repalce above with target link to mpags cipher library
target_link_libraries(mpags-cipher PRIVATE MPAGSCipher)