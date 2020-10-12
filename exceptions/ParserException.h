//
// Created by seweryn.gladysz on 02.09.2020.
//

#ifndef FLOWERPOTCONFIGURATION_PARSEREXCEPTION_H
#include "Exception.h"
#define FLOWERPOTCONFIGURATION_PARSEREXCEPTION_H

namespace Flowerpot {

    class ParserException : public Exception {
    public:
        ParserException();
        explicit ParserException(const std::string& type, const std::string & value);
    };
}


#endif //FLOWERPOTCONFIGURATION_PARSEREXCEPTION_H
