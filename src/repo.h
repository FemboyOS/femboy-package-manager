#pragma once
#include <stdio.h>
#include <string>
#include <vector>

using std::string;
using std::vector;

enum PackageType {
    PACKAGE_BINARY,
    PACKAGE_SOURCE,
    PACKAGE_MIXED
};

class Package {
    public:
        enum PackageType type;
        string name;
        string source_path;
        string binary_path;
        string base_path;
};

enum RepoType {
    REPO_GIT,
    REPO_HTTP,
    REPO_HTTPS,
    REPO_LOCAL_DIR
};

class Repo; /*{
    public:
        // repo type
        enum RepoType type;
        // vector of all package
        vector<Package> packages;
        // amount of packages
        size_t packages_size;
        Repo(string package_list);
};*/
