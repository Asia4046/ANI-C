#include "include/anic.h"
#include "include/macros.h"
#include <stdio.h>

int main(int argc, char* argv[]){
    if(argc < 2){
        printf("Please Specify Input File\n");
        return 1;
    }

    anic_compile_file(argv[1]);

    return 0;
}