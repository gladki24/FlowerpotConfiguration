//
// Created by seweryn.gladysz on 02.09.2020.
//

#ifndef CONFIGURATION_FILE_H

#include <string>
#include <map>

#define CONFIGURATION_FILE_H

namespace FlowerpotConfiguration {
    class File {
    public:
        File() = default;

        File(const std::string path);

        File(File &) = default;

        File(File &&) = default;

        File &operator=(const File &) = default;

        ~File() = default;

        std::map<std::string, std::string> load();

        std::map<std::string, std::string> load(const std::string path);

        void setPath(const std::string path);

        std::string getPath() const;

    private:
        std::string _path;
    };
}


#endif //CONFIGURATION_FILE_H
