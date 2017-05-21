cmake_minimum_required(VERSION 3.7)

file(GLOB SOURCE_FILES
        "**/*.cpp"
        "**/*.h"
        )


set(HDR_CLIENT CACHE INTERNAL  ${SOURCE_FILES})

add_library(MedAnalysisClient ${SOURCE_FILES})

add_executable(MedAnalysisClientExe ${SOURCE_FILES})
target_link_libraries(
        MedAnalysisClientExe
        MedAnalysisClient
)