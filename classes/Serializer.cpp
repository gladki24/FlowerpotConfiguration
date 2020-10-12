//
// Created by Seweryn on 02.09.2020.
//

#include "Serializer.h"

namespace Flowerpot {

    std::string Serializer::serialize(const ConfigurationSerializable &value) {
        return value.serialize();
    }

    std::string Serializer::serialize(const std::string &value) {
        return value;
    }

    std::string Serializer::serialize(const bool &value) {
        if (value) {
            return "1";
        }
        return "0";
    }

    // TODO move to template?
    std::string Serializer::serialize(const int &value) {
        return std::to_string(value);
    }

    std::string Serializer::serialize(const long &value) {
        return std::to_string(value);
    }

    std::string Serializer::serialize(const long long &value) {
        return std::to_string(value);
    }

    std::string Serializer::serialize(const double &value) {
        return std::to_string(value);
    }

    std::string Serializer::serialize(const float &value) {
        return std::to_string(value);
    }
}