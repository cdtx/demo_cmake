#include <stdio.h>

#include "lib/lib.h"
#include "gp/gp.h"


int main(int argc, char **argv) {
    printf("Main program\n");
    flib();
    printf("Version : %d\n", VERSION);
    gp();
}

