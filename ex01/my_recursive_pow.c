#include <stdio.h>

int my_recursive_pow(int param_1, int param_2){

    if (param_2 == 0) 
        return 1; 
    else if (param_2%2 == 0) 
        return my_recursive_pow(param_1, param_2/2)*my_recursive_pow(param_1, param_2/2); 
    else
        return param_1*my_recursive_pow(param_1, param_2/2)*my_recursive_pow(param_1, param_2/2); 
}

/*
int main() 
{ 
    int param_1 = 2; 
    int param_2 = 3; 
  
    printf("%d\n", my_recursive_pow(param_1, param_2));
    return 0; 
}


Time Complexity: O(n)
Space Complexity: O(1)
Algorithmic Paradigm: Divide and conquer.
*/ 