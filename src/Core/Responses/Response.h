//
// Created by Alessandro Manno on 18/11/2017.
//

#ifndef CFONY_RESPONSE_H
#define CFONY_RESPONSE_H


#include <string>

class Response {
public:
    unsigned int getStatus() const;

    void setStatus(unsigned int status);

    const std::string &getContent() const;

    void setContent(const std::string &content);

public:
    unsigned int status;
    std::string content;
};


#endif //CFONY_RESPONSE_H
