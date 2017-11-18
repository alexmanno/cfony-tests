// MyTestSuite1.h

#define CATCH_CONFIG_MAIN
#include "lib/catch.hpp"

#include <string>
#include "../src/Services/Faker.h"
#include "../src/Services/Faker.cpp"

TEST_CASE( "Fake random name generated", "[fake name]" ) {

    Faker faker;

    std::string name = "test";
    faker.addName(name);

    REQUIRE( name == faker.getRandomName() );
}