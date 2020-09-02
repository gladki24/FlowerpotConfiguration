//
// Created by seweryn.gladysz on 02.09.2020.
//

#include "library.h"
#include "classes/Parser.h"

class A : public FlowerpotConfiguration::ConfigurationParsable {
public:
    int i;
    float f;
    double d;
    bool b;
    std::string s;

    void parse(const std::string &str) override {
        i = 5;
        f = 3.2;
        d = 3.2;
        b = false;
        s = "Some";
    }
};

int main() {
    FlowerpotConfiguration::Parser parser;
    A a;

    parser.parse(a, "Some");

    return 0;
}

