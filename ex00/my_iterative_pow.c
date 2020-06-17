#include <stdio.h>

int my_iterative_pow(int param_1, int param_2) 
{ 
    int result = 1; // Initialize result 
  
    while (param_2 > 0) { 
        // If param_2 is odd, multiply param_1 with result 
        if (param_2 & 1) 
            result = result * param_1; 
  
        // n must be even now 
        param_2 = param_2 >> 1; // param_2 = param_2/2 
        param_1 = param_1 * param_1; // Change param_1 to param_1^2 
    } 
    return result; 
} 
/*
int main() 
{ 
    int param_1 = 3; 
    int param_2 = 5; 
  
    printf("Power is %d\n", my_iterative_pow(param_1, param_2)); 
  
}
*/