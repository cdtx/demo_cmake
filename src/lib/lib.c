#include <stdio.h>
#include "lib.h"

DLL_EXPORT void flib(void) {
    printf("    Function called from library\n");
}
