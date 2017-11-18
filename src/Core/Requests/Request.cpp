//
// Created by Alessandro Manno on 18/11/2017.
//

#include "Request.h"

const std::string &Route::getMethod() const {
    return method;
}

void Route::setMethod(const std::string &method) {
    Route::method = method;
}

const std::string &Route::getUri() const {
    return uri;
}

void Route::setUri(const std::string &uri) {
    Route::uri = uri;
}

const std::map<std::string, std::string> &Route::getQuery() const {
    return query;
}

void Route::setQuery(const std::map<std::string, std::string> &query) {
    Route::query = query;
}
