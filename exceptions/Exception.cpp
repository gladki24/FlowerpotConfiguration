//
// Created by seweryn.gladysz on 02.09.2020.
//

#include "Exception.h"

namespace FlowerpotConfiguration {
    Exception::Exception(const char* message) : std::runtime_error(message) {}

    Exception::Exception(const std::string& message) : std::runtime_error(message) {}
}