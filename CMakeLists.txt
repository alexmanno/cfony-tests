cmake_minimum_required(VERSION 3.8)
project(cfony)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp src/Entity/User.cpp src/Entity/User.h src/Services/Faker.cpp src/Services/Faker.h)
add_executable(cfony ${SOURCE_FILES})

add_subdirectory(tests)
add_executable(cfony_tests tests/First.cpp)