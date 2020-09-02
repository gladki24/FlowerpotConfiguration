//
// Created by seweryn.gladysz on 02.09.2020.
//

#ifndef CONFIGURATION_FILENOTFOUNDEXCEPTION_H
#include "Exception.h"
#define CONFIGURATION_FILENOTFOUNDEXCEPTION_H

namespace FlowerpotConfiguration {
    class FileNotFoundException : public Exception {
    public:
        FileNotFoundException();
    };
}


#endif //CONFIGURATION_FILENOTFOUNDEXCEPTION_H
