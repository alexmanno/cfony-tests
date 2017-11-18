cmake_minimum_required(VERSION 3.8)
project(cfony)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp src/Services/Faker.cpp src/Services/Faker.h src/Core/Routing/Route.cpp src/Core/Routing/Route.h src/Core/Routing/RouteBuilder.cpp src/Core/Routing/RouteBuilder.h src/Core/Responses/Response.cpp src/Core/Responses/Response.h src/Core/Responses/ResponseBuilder.cpp src/Core/Responses/ResponseBuilder.h)
add_executable(cfony ${SOURCE_FILES})

add_subdirectory(tests)
add_executable(cfony_tests tests/Services/Faker.cpp)