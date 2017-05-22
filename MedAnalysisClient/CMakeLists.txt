cmake_minimum_required(VERSION 3.7)

file(GLOB SOURCE_FILES
        "**/*.cpp"
        "**/*.h"
        )

get_filename_component(HDR_DIR "./"
        REALPATH BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

set(HDR_CLIENT ${HDR_DIR} CACHE INTERNAL "")

add_library(MedAnalysisClient ${SOURCE_FILES})
target_include_directories(MedAnalysisClient PUBLIC ${HDR_SQLITE})
target_link_libraries(MedAnalysisClient sqlite3)


add_executable(MedAnalysisClientExe ${SOURCE_FILES})
target_link_libraries(MedAnalysisClientExe MedAnalysisClient)