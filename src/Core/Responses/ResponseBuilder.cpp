//
// Created by Alessandro Manno on 18/11/2017.
//

#include "ResponseBuilder.h"

std::string ResponseBuilder::buildRawResponse(Response response) {

    std::string raw = "HTTP/1.1 " + response.status + " OK\n"+
            "Connection: close\n"+
            "Content-type: text/html; charset=UTF-8\n"+
            "\n";

    std::strcat(raw, "");

    return std::string();
}
