#include <stdio.h>
#include <stdlib.h>

#include <string>
#include <vector>

#include "repo.h"
#include "config.h"

class Repo {
    public:
        // repo type
        enum RepoType type;
        // vector of all package
        vector<Package> packages;
        // amount of packages
        size_t packages_size;
        Repo(PackageList package_list) {
            
        };
};

