//
// Created by Alessandro Manno on 18/11/2017.
//

#include "Response.h"

unsigned int Response::getStatus() const {
    return status;
}

void Response::setStatus(unsigned int status) {
    Response::status = status;
}

const std::string &Response::getContent() const {
    return content;
}

void Response::setContent(const std::string &content) {
    Response::content = content;
}
