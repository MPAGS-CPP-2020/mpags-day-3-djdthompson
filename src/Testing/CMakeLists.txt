# - Cmake Script for testing directory

#basic initial test (testing the testing!)
add_executable(testHello testHello.cpp)
add_test(NAME test-hello COMMAND testHello)

#Create Interface Library for Catch, now can just link to this library to get catch working
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CMAKE_CURRENT_LIST_DIR})
target_compile_features(Catch INTERFACE cxx_noexcept)

#First Catch-based testing
add_executable(testCatch testCatch.cpp)
target_link_libraries(testCatch Catch)
add_test(NAME test-catch COMMAND testCatch -s)

#TransformChar testing
add_executable(testTransformChar testTransformChar.cpp)
target_link_libraries(testTransformChar MPAGSCipher Catch)
add_test(NAME test-transformchar COMMAND testTransformChar -s) #convention is lowercamel for testnames but upperCamel for exe name
