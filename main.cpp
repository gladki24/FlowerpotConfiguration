//
// Created by seweryn.gladysz on 02.09.2020.
//

#include "library.h"

int main() {
    FlowerpotConfiguration::File config("./keys-values-file.txt");

    auto m = config.load();
    config.save(m);

    return 0;
}

