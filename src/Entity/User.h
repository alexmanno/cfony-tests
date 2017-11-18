//
// Created by Alessandro Manno on 17/11/2017.
//

#ifndef CFONY_USER_H
#define CFONY_USER_H


#include <string>

class User {
private:
    unsigned long id;
    std::string name;
    std::string surname;

public:
    unsigned long getId() const;

    void setId(unsigned long id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getSurname() const;

    void setSurname(const std::string &surname);
};


#endif //CFONY_USER_H
