//
// Created by seweryn.gladysz on 02.09.2020.
//

#include "File.h"
#include "../exceptions/FileNotFoundException.h"
#include "../exceptions/FileCreatingException.h"
#include <fstream>
#include <iostream>
#include <regex>

namespace Flowerpot {

    File::File(const std::string path) : _path(path) {}

    void File::setPath(const std::string path) {
        _path = path;
    }

    std::string File::getPath() const {
        return _path;
    }

    std::map<std::string, std::string> File::load(const std::string &path) {
        std::ifstream file(path);

        if (file.is_open()) {
            std::regex keyRegex(R"(([\w\d])+(?=[\s\=]))");
            std::regex valueRegex(R"([^=\s]+$)");

            std::smatch keyMatch;
            std::smatch valueMatch;

            std::string line;
            std::map<std::string, std::string> configuration;

            while (std::getline(file, line)) {
                bool hasKey = std::regex_search(line, keyMatch, keyRegex);
                bool hasValue = std::regex_search(line, valueMatch, valueRegex);

                if (hasKey && hasValue) {
                    configuration[keyMatch.str()] = valueMatch.str();
                }
            }

            file.close();
            return configuration;
        } else {
            throw FileNotFoundException(path);
        }
    }

    std::map<std::string, std::string> File::load() const {
        return load(_path);
    }

    void File::save(const std::string &path, const std::map<std::string, std::string> &map) {
        std::ofstream file(path);

        if (file.is_open()) {
            for (auto const&[key, value] : map) {
                file << key << "=" << value << std::endl;
            }

            file.close();
        } else {
            throw FileCreatingException();
        }
    }

    void File::save(const std::map<std::string, std::string> &map) const {
        save(_path, map);
    }
}