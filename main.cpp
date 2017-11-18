#include <iostream>
#include "src/Services/Faker.h"
#include "src/Core/Routing/RequestBuilder.h"


std::string getRequestFromArgv(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--request") == 0 && i + 1 < argc) {
            std::string request = argv[i + 1];
            return request;
        }
    }
    return "";
}

int main(int argc, char *argv[]) {

    if (argc <= 1) {
        std::cerr << "No arguments." << std::endl;
        return 1;
    }

    std::string request = getRequestFromArgv(argc, argv);

    RouteBuilder routeBuilder;

    auto route = routeBuilder.getRouteFromRequest(request);

    std::cout << route.getUri();


    std::cout << std::endl;

    return 0;
}

