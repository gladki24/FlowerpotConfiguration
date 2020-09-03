//
// Created by Seweryn on 02.09.2020.
//

#include <string>

#ifndef FLOWERPOTCONFIGURATION_CONFIGURATIONSERIALIZABLE_H
#define FLOWERPOTCONFIGURATION_CONFIGURATIONSERIALIZABLE_H

#endif //FLOWERPOTCONFIGURATION_CONFIGURATIONSERIALIZABLE_H

namespace FlowerpotConfiguration {
    class ConfigurationSerializable {
    public:
        ~ConfigurationSerializable() = default;
        virtual std::string serialize() const = 0;
        virtual void parse(const std::string&) = 0;
    };
}