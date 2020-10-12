//
// Created by seweryn.gladysz on 02.09.2020.
//

#ifndef CONFIGURATION_FILENOTFOUNDEXCEPTION_H

#include "Exception.h"

#define CONFIGURATION_FILENOTFOUNDEXCEPTION_H

namespace Flowerpot {
    class FileNotFoundException : public Exception {
    public:
        FileNotFoundException();

        explicit FileNotFoundException(const std::string &);
    };
}


#endif //CONFIGURATION_FILENOTFOUNDEXCEPTION_H
