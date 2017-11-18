//
// Created by Alessandro Manno on 18/11/2017.
//

#ifndef CFONY_ROUTEBUILDER_H
#define CFONY_ROUTEBUILDER_H

#include "Request.h"

class RouteBuilder {
public:
    Route getRouteFromRequest(std::string request);
};


#endif //CFONY_ROUTEBUILDER_H
