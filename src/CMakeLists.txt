add_executable(Main main.cpp)

add_library(Vector Vector.cpp)

target_link_libraries(Main Vector)