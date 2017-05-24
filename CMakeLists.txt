cmake_minimum_required(VERSION 3.7)
project(MedAnalysis)

#---------------------------------------#
#------------ DEFAULT FLAGS ------------#
#---------------------------------------#

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


#------------------------------------#
#------------ LIBRAIRIES ------------#
#------------------------------------#

#---- Catch Test Framework ----#

# Source files
add_library(Catch INTERFACE)

# Headers
target_include_directories(Catch INTERFACE libs/catch)


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