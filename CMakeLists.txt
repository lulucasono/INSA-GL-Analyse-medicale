cmake_minimum_required(VERSION 3.7)
project(MedAnalysis)

# You can tweak some common (for all subprojects) stuff here. For example:

set(CMAKE_CXX_STANDARD 11)

add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE libs/catch)


add_subdirectory(MedAnalysisClient)
add_subdirectory(MedAnalysisServer)
add_subdirectory(tests/MedAnalysisClientUnitTest)
add_subdirectory(tests/MedAnalysisServerUnitTest)

enable_testing()
add_test(NAME MedAnalysisClientUnitTest COMMAND MedAnalysisClientUnitTest)
add_test(NAME MedAnalysisServerUnitTest COMMAND MedAnalysisServerUnitTest)