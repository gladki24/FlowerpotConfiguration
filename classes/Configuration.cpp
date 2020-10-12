//
// Created by Seweryn on 03.09.2020.
//

#include "Configuration.h"
#include "../classes/File.h"

namespace Flowerpot {

    Configuration::Configuration(const std::string &path) : _path(path) {}

    void Configuration::load() {
        std::map<std::string, std::string> propertiesMap = File::load(_path);
        _parseProperties(_intProps, propertiesMap);
        _parseProperties(_longProps, propertiesMap);
        _parseProperties(_longLongProps, propertiesMap);
        _parseProperties(_doubleProps, propertiesMap);
        _parseProperties(_floatProps, propertiesMap);
        _parseProperties(_boolProps, propertiesMap);
        _parseProperties(_stringProps, propertiesMap);
        _parseProperties(_serializableProps, propertiesMap);
    }

    void Configuration::save() {
        std::map<std::string, std::string> propertiesMap;

        _serializeProperties(_intProps, propertiesMap);
        _serializeProperties(_longProps, propertiesMap);
        _serializeProperties(_longLongProps, propertiesMap);
        _serializeProperties(_doubleProps, propertiesMap);
        _serializeProperties(_floatProps, propertiesMap);
        _serializeProperties(_boolProps, propertiesMap);
        _serializeProperties(_stringProps, propertiesMap);
        _serializeProperties(_serializableProps, propertiesMap);

        File::save(_path, propertiesMap);
    }

    void Configuration::addProp(cstrr propertyName, ptr<int> value) {
        _intProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, ptr<long> value) {
        _longProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, ptr<long long> value) {
        _longLongProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, ptr<double> value) {
        _doubleProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, ptr<float> value) {
        _floatProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, ptr<bool> value) {
        _boolProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, ptr<std::string> value) {
        _stringProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, ptr<ConfigurationSerializable> value) {
        _serializableProps.push_back(_getProperty(propertyName, value));
    }

    template<class T>
    Property<T> Configuration::_getProperty(const std::string &propertyName, ptr<T> value) const {
        Property<T> property(propertyName, value);
        return property;
    }

    template<class T>
    void Configuration::_parseProperties(Properties<T> &properties,
                                         std::map<std::string, std::string> &propertiesMap) {
        for (Property<T> &prop : properties) {
            Parser::parse(*prop.second, propertiesMap[prop.first]);
        }
    }

    template<class T>
    void Configuration::_serializeProperties(const Properties<T> &properties,
                                             std::map<std::string, std::string> &propertiesMap) {
        for (const Property<T> &prop : properties) {
            propertiesMap[prop.first] = Serializer::serialize(*prop.second);
        }
    }
}