//
// Created by Seweryn on 03.09.2020.
//

#include "Configuration.h"

namespace FlowerpotConfiguration {
    void Configuration::addProp(cstrr propertyName, sptr<int> value) {
        _intProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, sptr<long> value) {
        _longProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, sptr<long long> value) {
        _longLongProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, sptr<double> value) {
        _doubleProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, sptr<float> value) {
        _floatProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, sptr<bool> value) {
        _boolProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, sptr<std::string> value) {
        _stringProps.push_back(_getProperty(propertyName, value));
    }

    void Configuration::addProp(cstrr propertyName, sptr<ConfigurationSerializable> value) {
        _serializableProps.push_back(_getProperty(propertyName, value));
    }

    template<class T>
    Property<T> Configuration::_getProperty(const std::string &propertyName, sptr<T> value) const {
        Property<T> property(propertyName, value);
        return property;
    }
}