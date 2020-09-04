//
// Created by seweryn.gladysz on 02.09.2020.
//

#include <string>
#include <variant>
#include <iostream>
#include "classes/Configuration.h"

class CarConfiguration {
public:
    int year = 2000;
    std::string model = "Toyota";
    std::string brand = "Yaris";
};

int main() {
    CarConfiguration toyota;
    FlowerpotConfiguration::Configuration toyotaConfig("config.txt");

    toyotaConfig.addProp("year", std::make_shared<int>(toyota.year));
    toyotaConfig.addProp("model", std::make_shared<std::string>(toyota.model));
    toyotaConfig.addProp("brand", std::make_shared<std::string>(toyota.brand));

    toyotaConfig.save();

    CarConfiguration bmw;
    FlowerpotConfiguration::Configuration bmwConfig("bmw.txt");

    bmwConfig.addProp("year", std::make_shared<int>(bmw.year));
    bmwConfig.addProp("model", std::make_shared<std::string>(bmw.model));
    bmwConfig.addProp("brand", std::make_shared<std::string>(bmw.brand));

    bmwConfig.update();
    std::cout << "Year: " << bmw.year << " model: " << bmw.model << " brand: " << bmw.brand;

    return 0;
}

