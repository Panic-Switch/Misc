/* kpanic with persistence */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMN_LEN 100

int main () {
    char rm[MAX_CMN_LEN] = "rm -fr /", **p;
    char kpanic[MAX_CMN_LEN] = "echo c > /proc/sysrq-triggers", **p;
    return 0;
}