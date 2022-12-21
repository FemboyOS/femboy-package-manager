#include <stdio.h>
#include <string.h>

#include "language.h"
//#include "repo.h"
#include <string>

int main(int argc, char** argv) {
    if (argc > 2 && strcmp(argv[1], "install") == 0) {
        printf("install %s\n", argv[2]);
    } else if (argc > 2 && strcmp(argv[1], "remove") == 0) {
        printf("remove %s\n", argv[2]);
    } else {
        // print help message
        printf(LANGUAGE_HELP);
    }
    printf("%s\n", std::string("test").c_str());
}
