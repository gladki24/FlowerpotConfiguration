//
// Created by seweryn.gladysz on 02.09.2020.
//

#include "library.h"
#include "classes/Parser.h"
#include "classes/Serializer.h"

class A : public FlowerpotConfiguration::ConfigurationSerializable {
public:
    std::string serialize() const override {
        return "i:" + std::to_string(i);
    }
private:
    int i = 4;
};

int main() {
    return 0;
}

