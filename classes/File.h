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

        void setPath(const std::string path);

        std::string getPath() const;

        std::map<std::string, std::string> load() const;

        static std::map<std::string, std::string> load(const std::string &path);

        void save(const std::map<std::string, std::string> &map) const;

        static void save(const std::string &path, const std::map<std::string, std::string> &map);

    private:
        std::string _path;
    };
}


#endif //CONFIGURATION_FILE_H
