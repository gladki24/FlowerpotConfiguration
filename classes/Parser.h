//
// Created by seweryn.gladysz on 02.09.2020.
//

#ifndef FLOWERPOTCONFIGURATION_PARSER_H

#include <string>
#include <map>
#include "ConfigurationParsable.h"

#define FLOWERPOTCONFIGURATION_PARSER_H

namespace FlowerpotConfiguration {
    class Parser {
    public:
        Parser() = default;

        ~Parser() = default;

        Parser(Parser &) = default;

        Parser(Parser &&) = default;

        Parser &operator=(const Parser &) = default;

        static void parse(ConfigurationParsable &member, const std::string &value);

        static void parse(int &member, const std::string &value);

        static void parse(long &member, const std::string &value);

        static void parse(long long &member, const std::string &value);

        static void parse(double &member, const std::string &value);

        static void parse(float &member, const std::string &value);

        static void parse(std::string &member, const std::string &value);

        static void parse(bool &member, const std::string &value);
    };
}

#endif //FLOWERPOTCONFIGURATION_PARSER_H
