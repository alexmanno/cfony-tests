#define CATCH_CONFIG_MAIN

#include "../lib/catch.hpp"

#include <string>
#include "../../src/Services/Faker.h"
#include "../../src/Services/Faker.cpp"

TEST_CASE("Fake names generator", "[fake name]") {

    Faker faker;
    std::string name;

    SECTION("single name generator") {
        faker.clear();
        name = "test";
        faker.addName(name);

        REQUIRE(name == faker.getRandomName());
    }
    SECTION("random name generator") {
        faker.clear();
        name = "test1";
        faker.addName(name);
        name = "test2";
        faker.addName(name);
        name = "test3";
        faker.addName(name);

        std::map<int, std::string> names = faker.getNames();
        std::string randomName = faker.getRandomName();

        if (randomName == names[0]) {
            REQUIRE(true);
        } else if (randomName == names[1]) {
            REQUIRE(true);
        } else if (randomName == names[2]) {
            REQUIRE(true);
        } else {
            REQUIRE(false);
        }

    }

}