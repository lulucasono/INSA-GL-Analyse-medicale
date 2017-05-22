cmake_minimum_required(VERSION 3.7)
project(MedAnalysis)

# You can tweak some common (for all subprojects) stuff here. For example:

set(CMAKE_CXX_STANDARD 11)

add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE libs/catch)

get_filename_component(HDR_DIR "./libs/sqlite3" REALPATH BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(HDR_SQLITE ${HDR_DIR} CACHE INTERNAL "")

add_library(sqlite3 ./libs/sqlite3/sqlite3.c)


add_subdirectory(MedAnalysisClient)
add_subdirectory(MedAnalysisServer)
add_subdirectory(tests/MedAnalysisClientUnitTest)
add_subdirectory(tests/MedAnalysisServerUnitTest)

enable_testing()
add_test(NAME MedAnalysisClientUnitTest COMMAND MedAnalysisClientUnitTest)
add_test(NAME MedAnalysisServerUnitTest COMMAND MedAnalysisServerUnitTest)