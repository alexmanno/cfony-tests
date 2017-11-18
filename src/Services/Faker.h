//
// Created by Alessandro Manno on 17/11/2017.
//

#ifndef CFONY_FAKER_H
#define CFONY_FAKER_H


#include <string>
#include <map>

class Faker {
public:
    Faker();

private:
    int lastindex;
    std::map<int, std::string> names;
public:
    int getLastindex() const;

    void setLastindex(int lastindex);

    const std::map<int, std::string> &getNames() const;

    void setNames(const std::map<int, std::string> &names);

    void addName(std::string& name);

    std::string getRandomName();
};


#endif //CFONY_FAKER_H
