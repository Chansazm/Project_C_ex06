int my_iterative_factorial(int param_1){

    int result = 1;
   
        for ( int i = param_1; i >= 1; i-- )
        result *= i;

    return result;

}