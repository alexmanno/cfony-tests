//
// Created by Alessandro Manno on 17/11/2017.
//

#include "User.h"

unsigned long User::getId() const {
    return id;
}

void User::setId(unsigned long id) {
    User::id = id;
}

const std::string &User::getName() const {
    return name;
}

void User::setName(const std::string &name) {
    User::name = name;
}

const std::string &User::getSurname() const {
    return surname;
}

void User::setSurname(const std::string &surname) {
    User::surname = surname;
}
