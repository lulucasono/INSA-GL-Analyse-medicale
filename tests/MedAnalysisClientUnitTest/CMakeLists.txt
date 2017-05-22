cmake_minimum_required(VERSION 3.7)

file(GLOB SOURCE_FILES
        "*.cpp"
        )

add_executable(MedAnalysisClientUnitTest ${SOURCE_FILES})

target_include_directories(MedAnalysisClientUnitTest PUBLIC ${HDR_CLIENT})
target_link_libraries(MedAnalysisClientUnitTest MedAnalysisClient Catch)