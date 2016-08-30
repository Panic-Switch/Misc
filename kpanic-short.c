#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMN_LEN 100

int main()
{
    char cmd[MAX_CMN_LEN] = "echo c > /proc/sysrq-trigger", **p;
    system(cmd);
    return 0;
}
