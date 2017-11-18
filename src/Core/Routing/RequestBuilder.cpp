//
// Created by Alessandro Manno on 18/11/2017.
//

#include <sstream>
#include <regex>
#include "RequestBuilder.h"

Route RouteBuilder::getRouteFromRequest(std::string request) {
    Route route;

    std::string result;
    try {
        std::regex re("([A-Za-z]{3,4}) ([a-zA-Z0-9/]*)");
        std::smatch match;
        if (std::regex_search(request, match, re) && match.size() > 1) {
            route.method = match.str(1);
            route.uri = match.str(2);
        } else {
            route.method = "";
            route.uri = "";
        }
    } catch (std::regex_error& e) {
        route.method = "";
        route.uri = "";
    }

    route.query["q"] = "lol";

    return route;
}
