//
// Created by Alessandro Manno on 17/11/2017.
//

#include "Faker.h"

Faker::Faker() {
    lastindex = 0;
}

unsigned long Faker::count() {
    return Faker::names.size();
}

int Faker::getLastindex() const {
    return lastindex;
}

void Faker::setLastindex(int lastindex) {
    Faker::lastindex = lastindex;
}

const std::map<int, std::string> &Faker::getNames() const {
    return names;
}

void Faker::setNames(const std::map<int, std::string> &names) {
    Faker::names = names;
}

void Faker::addName(std::string &name) {
    Faker::names[Faker::lastindex++] = name;
}

void Faker::clear() {
    Faker::lastindex = 0;
    Faker::names.clear();
}

std::string Faker::getRandomName() {
    /* initialize random seed: */
    std::srand(time(0));

    long idx = std::rand() % Faker::lastindex;

    return Faker::names[idx];
}
