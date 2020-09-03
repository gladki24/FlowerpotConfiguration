//
// Created by Seweryn on 03.09.2020.
//

#ifndef FLOWERPOTCONFIGURATION_CONFIGURATION_H
#define FLOWERPOTCONFIGURATION_CONFIGURATION_H

#include <vector>
#include <string>
#include <memory>
#include "ConfigurationSerializable.h"

template<class T>
using Property = std::pair<std::string, std::shared_ptr<T>>;

template<class T>
using Properties = std::vector<Property<T>>;

template<class T>
using sptr = const std::shared_ptr<T>&;

using cstrr = const std::string &;

namespace FlowerpotConfiguration {
    class Configuration {
    public:
        Configuration() = default;

        ~Configuration() = default;

        Configuration(Configuration &) = default;

        Configuration(Configuration &&) = default;

        Configuration &operator=(const Configuration &) = default;

        void addProp(cstrr, sptr<int>);

        void addProp(cstrr, sptr<long>);

        void addProp(cstrr, sptr<long long>);

        void addProp(cstrr, sptr<double>);

        void addProp(cstrr, sptr<float>);

        void addProp(cstrr, sptr<bool>);

        void addProp(cstrr, sptr<std::string>);

        void addProp(cstrr, sptr<ConfigurationSerializable>);

    private:
        Properties<int> _intProps = Properties<int>();
        Properties<long> _longProps = Properties<long>();
        Properties<long long> _longLongProps = Properties<long long>();
        Properties<double> _doubleProps = Properties<double>();
        Properties<float> _floatProps = Properties<float>();
        Properties<bool> _boolProps = Properties<bool>();
        Properties<std::string> _stringProps = Properties<std::string>();
        Properties<ConfigurationSerializable> _serializableProps = Properties<ConfigurationSerializable>();

        template<class T>
        Property<T> _getProperty(const std::string &, sptr<T>) const;
    };
}

#endif //FLOWERPOTCONFIGURATION_CONFIGURATION_H
