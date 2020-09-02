//
// Created by seweryn.gladysz on 02.09.2020.
//

#ifndef CONFIGURATION_EXCEPTION_H

#include <string>
#include <stdexcept>

#define CONFIGURATION_EXCEPTION_H

namespace FlowerpotConfiguration {
    class Exception : public std::runtime_error {
    public:
        explicit Exception(const char *message);

        explicit Exception(const std::string&);

        virtual ~Exception() noexcept = default;
    };
}

#endif //CONFIGURATION_EXCEPTION_H