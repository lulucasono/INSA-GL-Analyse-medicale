cmake_minimum_required(VERSION 3.7)

file(GLOB SOURCE_FILES
        "*.cpp"
        )

add_executable(MedAnalysisServerUnitTest ${SOURCE_FILES})
target_link_libraries(MedAnalysisServerUnitTest Catch MedAnalysisServer)
target_include_directories(MedAnalysisServerUnitTest ${HDR_SERVER})