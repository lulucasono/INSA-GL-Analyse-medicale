cmake_minimum_required(VERSION 3.7)

file(GLOB SOURCE_FILES
        "**/*.cpp"
        "**/*.h"
        )

set(HDR_SERVER CACHE INTERNAL ${SOURCE_FILES})

add_library(MedAnalysisServer ${SOURCE_FILES})

add_executable(MedAnalysisServerExe ${SOURCE_FILES})
target_link_libraries(
        MedAnalysisServerExe
        MedAnalysisServer
)