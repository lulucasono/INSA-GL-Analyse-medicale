cmake_minimum_required(VERSION 3.7)

file(GLOB SOURCE_FILES
        "**/*.cpp"
        "**/*.h"
        )

get_filename_component(HDR_DIR "./"
        REALPATH BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

set(HDR_SERVER ${HDR_DIR} CACHE INTERNAL "")

add_library(MedAnalysisServer ${SOURCE_FILES})
target_include_directories(MedAnalysisServer PUBLIC ${HDR_SQLITE})
target_link_libraries(MedAnalysisServer sqlite3)


add_executable(MedAnalysisServerExe ${SOURCE_FILES})
target_link_libraries(MedAnalysisServerExe MedAnalysisServer)