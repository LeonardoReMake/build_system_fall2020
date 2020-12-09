project(C)


add_executable(CTest main_test.cpp tests.cpp)

add_dependencies(CTest ProjectA)
target_link_libraries(CTest GTest::GTest Lib)
target_include_directories(CTest PRIVATE ${build_system_SOURCE_DIR})


add_executable(C main.cpp)
add_dependencies(C ProjectA)

target_link_libraries(C Lib)
target_include_directories(C PRIVATE ${build_system_SOURCE_DIR})
