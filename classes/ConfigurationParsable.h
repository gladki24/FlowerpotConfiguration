//
// Created by seweryn.gladysz on 02.09.2020.
//

#ifndef FLOWERPOTCONFIGURATION_CONFIGURATIONPARSABLE_H
#define FLOWERPOTCONFIGURATION_CONFIGURATIONPARSABLE_H


#include <string>

namespace FlowerpotConfiguration {
    class ConfigurationParsable {
    public:
        virtual ~ConfigurationParsable() = default;
        virtual void parse(const std::string&) = 0;
    };
}


#endif //FLOWERPOTCONFIGURATION_CONFIGURATIONPARSABLE_H
