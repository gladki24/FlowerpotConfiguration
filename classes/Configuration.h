//
// Created by Seweryn on 03.09.2020.
//

#ifndef FLOWERPOTCONFIGURATION_CONFIGURATION_H

#include <vector>
#include <string>
#include <memory>
#include <map>
#include "../classes/Serializer.h"
#include "../classes/Parser.h"

#define FLOWERPOTCONFIGURATION_CONFIGURATION_H

template<class T>
using Property = std::pair<std::string, std::shared_ptr<T>>;

template<class T>
using Properties = std::vector<Property<T>>;

template<class T>
using ptr = T*;

using cstrr = const std::string &;

namespace FlowerpotConfiguration {
    class Configuration {
    public:
        Configuration() = default;

        explicit Configuration(const std::string &);

        ~Configuration() = default;

        Configuration(Configuration &) = default;

        Configuration(Configuration &&) = default;

        Configuration &operator=(const Configuration &) = default;

        void load();

        void save();

        void addProp(cstrr, ptr<int>);

        void addProp(cstrr, ptr<long>);

        void addProp(cstrr, ptr<long long>);

        void addProp(cstrr, ptr<double>);

        void addProp(cstrr, ptr<float>);

        void addProp(cstrr, ptr<bool>);

        void addProp(cstrr, ptr<std::string>);

        void addProp(cstrr, ptr<ConfigurationSerializable>);

    private:
        std::string _path;

        Properties<int> _intProps = Properties<int>();
        Properties<long> _longProps = Properties<long>();
        Properties<long long> _longLongProps = Properties<long long>();
        Properties<double> _doubleProps = Properties<double>();
        Properties<float> _floatProps = Properties<float>();
        Properties<bool> _boolProps = Properties<bool>();
        Properties<std::string> _stringProps = Properties<std::string>();
        Properties<ConfigurationSerializable> _serializableProps = Properties<ConfigurationSerializable>();

        template<class T>
        Property<T> _getProperty(const std::string &, ptr<T>) const;

        template<class T>
        void _parseProperties(Properties<T> &, std::map<std::string, std::string> &);

        template<class T>
        void _serializeProperties(const Properties<T> &, std::map<std::string, std::string> &);
    };
}

#endif //FLOWERPOTCONFIGURATION_CONFIGURATION_H
