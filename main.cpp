#include <iostream>
#include "src/Services/Faker.h"

int main() {

    std::string name;

    Faker faker;

    name = "alex";
    faker.addName(name);
    name = "willy";
    faker.addName(name);
    name = "Manno";
    faker.addName(name);




    std::cout << "Hello, World!" << faker.getRandomName() << std::endl;
    return 0;
}