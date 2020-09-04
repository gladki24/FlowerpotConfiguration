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
    FlowerpotConfiguration::Configuration toyotaConfig("toyota.txt");
    toyotaConfig.addProp("year", &toyota.year);
    toyotaConfig.addProp("model", &toyota.model);
    toyotaConfig.addProp("brand", &toyota.brand);

    toyotaConfig.save();

    CarConfiguration bmw;
    FlowerpotConfiguration::Configuration bmwConfig("bmw.txt");

    bmwConfig.addProp("year", &bmw.year);
    bmwConfig.addProp("model", &bmw.model);
    bmwConfig.addProp("brand", &bmw.brand);
    bmwConfig.load();

    std::cout << "Year: " << bmw.year << " model: " << bmw.model << " brand: " << bmw.brand;

    return 0;
}

