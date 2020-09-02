//
// Created by seweryn.gladysz on 02.09.2020.
//

#include <iostream>
#include "Parser.h"
#include "../exceptions/ParserException.h"

namespace FlowerpotConfiguration {

    void Parser::parse(ConfigurationParsable &member, const std::string &value) {
        member.parse(value);
    }

    void Parser::parse(int &member, const std::string &value) {
        try {
            member = std::stoi(value);
        } catch (const std::invalid_argument &) {
            throw ParserException("int", value);
        }
    }

    void Parser::parse(long &member, const std::string &value) {
        try {
            member = std::stoi(value);
        } catch (const std::invalid_argument &) {
            throw ParserException("long", value);
        }
    }

    void Parser::parse(long long &member, const std::string &value) {
        try {
            member = std::stoi(value);
        } catch (const std::invalid_argument &) {
            throw ParserException("long long", value);
        }
    }

    void Parser::parse(double &member, const std::string &value) {
        try {
            member = std::stod(value);
        } catch (const std::invalid_argument &) {
            throw ParserException("double", value);
        }
    }

    void Parser::parse(float &member, const std::string &value) {
        try {
            member = std::stof(value);
        } catch (const std::invalid_argument &) {
            throw ParserException("float", value);
        }
    }

    void Parser::parse(std::string &member, const std::string &value) {
        member = value;
    }

    void Parser::parse(bool &member, const std::string &value) {
        if (value == "1") {
            member = true;
        } else if (value == "0") {
            member = false;
        } else {
            throw ParserException("bool", value);
        }
    }
}