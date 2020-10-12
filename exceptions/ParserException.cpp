//
// Created by seweryn.gladysz on 02.09.2020.
//

#include "ParserException.h"

namespace Flowerpot {
    ParserException::ParserException(): Exception("Parser exception") {}

    ParserException::ParserException(const std::string &type, const std::string &value)
    : Exception("Parser exception. Type: " + type + ". Value: \"" + value + "\"") {}
}