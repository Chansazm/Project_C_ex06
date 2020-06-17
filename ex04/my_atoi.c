#include <stdio.h>
#include <string.h>

int my_atoi(char* param_1)
{
    int k = 0;
    while (*param_1) {
        k = (k << 3) + (k << 1) + (*param_1) - '0';
        param_1++;
     }
     return k; 
}