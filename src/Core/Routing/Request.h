//
// Created by Alessandro Manno on 18/11/2017.
//

#ifndef CFONY_ROUTE_H
#define CFONY_ROUTE_H


#include <string>
#include <map>

class Route {
public:
    std::string method;
    std::string uri;
    std::map<std::string, std::string> query;

public:
    const std::string &getMethod() const;

    void setMethod(const std::string &method);

    const std::string &getUri() const;

    void setUri(const std::string &uri);

    const std::map<std::string, std::string> &getQuery() const;

    void setQuery(const std::map<std::string, std::string> &query);

};


#endif //CFONY_ROUTE_H
