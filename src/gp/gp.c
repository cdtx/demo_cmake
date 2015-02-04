#include <stdio.h>

#include "gp.h"
#include "amdc.h"
#include "amdd.h"

void gp(void) {
    printf("  GP version %s\n", GP_VERSION);
    // Run Amendment C functionalities
    amdc();
    
    // Run Amendment D functionalities
    amdd();
}
