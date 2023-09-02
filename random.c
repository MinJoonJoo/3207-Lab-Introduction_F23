#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    int x = rand()%26;
    char c = (char)(x+65);
    return c;
}