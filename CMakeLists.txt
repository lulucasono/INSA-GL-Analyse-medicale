cmake_minimum_required(VERSION 3.7)
project(MedAnalysis)

#---------------------------------------#
#------------ DEFAULT FLAGS ------------#
#---------------------------------------#

set(CMAKE_CXX_STANDARD 11)


#------------------------------------#
#------------ LIBRAIRIES ------------#
#------------------------------------#

#---- Catch Test Framework ----#

# Source files
add_library(Catch INTERFACE)

# Headers
target_include_directories(Catch INTERFACE libs/catch)


#---- Sqlite3 ----#

# Source files
add_library(sqlite3 ./libs/sqlite3/sqlite3.c)

# Headers
get_filename_component(HDR_DIR "./libs/sqlite3" REALPATH BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(HDR_SQLITE ${HDR_DIR} CACHE INTERNAL "")


#--------------------------------------#
#------------ SUB-PROJECTS ------------#
#--------------------------------------#

#---- APPS ----#

add_subdirectory(MedAnalysisClient)
add_subdirectory(MedAnalysisServer)

#---- TESTS ----#

add_subdirectory(tests/MedAnalysisClientUnitTest)
add_subdirectory(tests/MedAnalysisServerUnitTest)

enable_testing()
add_test(NAME MedAnalysisClientUnitTest COMMAND MedAnalysisClientUnitTest)
add_test(NAME MedAnalysisServerUnitTest COMMAND MedAnalysisServerUnitTest)