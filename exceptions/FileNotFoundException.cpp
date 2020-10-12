//
// Created by seweryn.gladysz on 02.09.2020.
//

#include "FileNotFoundException.h"

namespace Flowerpot {
    FileNotFoundException::FileNotFoundException() : Exception("File not found") {}

    FileNotFoundException::FileNotFoundException(const std::string &path) : Exception("File not found: " + path) {}
}