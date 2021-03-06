cmake_minimum_required(VERSION 3.10)

include_directories(${PROJECT_SOURCE_DIR}/lib/include)
link_directories(${PROJECT_SOURCE_DIR}/lib/src)
add_executable(VectorEx main.cpp)
target_link_libraries(VectorEx Vector)