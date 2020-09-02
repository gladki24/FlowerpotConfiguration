//
// Created by Seweryn on 02.09.2020.
//

#ifndef FLOWERPOTCONFIGURATION_SERIALIZER_H

#include <string>
#include "ConfigurationSerializable.h"

#define FLOWERPOTCONFIGURATION_SERIALIZER_H

namespace FlowerpotConfiguration {
    class Serializer {
    public:
        Serializer() = default;

        ~Serializer() = default;

        Serializer(Serializer &) = default;

        Serializer(Serializer &&) = default;

        Serializer &operator=(const Serializer &) = default;

        static std::string serialize(const ConfigurationSerializable &value);

        static std::string serialize(const std::string &value);

        static std::string serialize(const bool &value);

        static std::string serialize(const int &value);

        static std::string serialize(const long &value);

        static std::string serialize(const long long &value);

        static std::string serialize(const double &value);

        static std::string serialize(const float &value);
    };
}

#endif //FLOWERPOTCONFIGURATION_SERIALIZER_H
