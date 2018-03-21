#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sys/mman.h>


int hashFunction( char s[]) {
    int y = 0;
    for (int i=0 ; i<strlen(s); i++){
        y += pow((int) s[i], i);
    }
    return (y);
}

int main(void) {
    printf("%d", hashFunction("TFFq"));
    return 0;
}