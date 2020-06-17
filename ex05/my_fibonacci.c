int my_fibonacci(int param_1){ 
    
    if (param_1 <= 1) // test base case
        return param_1; // base cases: 0! = 1 and 1! = 1
    return my_fibonacci(param_1 - 1) + my_fibonacci(param_1 - 2); 
} 