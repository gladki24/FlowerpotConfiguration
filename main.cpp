//
// Created by seweryn.gladysz on 02.09.2020.
//

#include "library.h"

int main() {
    FlowerpotConfiguration::File config("./key-value-file.txt");
    config.load();

    return 0;
}

