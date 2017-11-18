cmake_minimum_required(VERSION 3.8)
project(cfony)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp src/Services/Faker.cpp src/Services/Faker.h src/Core/Requests/Request.cpp src/Core/Requests/Request.h src/Core/Requests/RequestBuilder.cpp src/Core/Requests/RequestBuilder.h src/Core/Responses/Response.cpp src/Core/Responses/Response.h src/Core/Responses/ResponseBuilder.cpp src/Core/Responses/ResponseBuilder.h)
add_executable(cfony ${SOURCE_FILES})

add_subdirectory(tests)
add_executable(cfony_tests tests/Services/Faker.cpp)