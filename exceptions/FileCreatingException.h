//
// Created by Seweryn on 05.09.2020.
//

#ifndef FLOWERPOTCONFIGURATION_FILECREATINGEXCEPTION_H
#include "Exception.h"
#define FLOWERPOTCONFIGURATION_FILECREATINGEXCEPTION_H

namespace FlowerpotConfiguration {
    class FileCreatingException : public Exception {
    public:
        FileCreatingException();
    };
}

#endif //FLOWERPOTCONFIGURATION_FILECREATINGEXCEPTION_H
