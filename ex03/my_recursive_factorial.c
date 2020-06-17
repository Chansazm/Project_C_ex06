int my_recursive_factorial(int param_1){

if ( param_1 <= 1 ) // test for base case
    return 1; // base cases: 0! = 1 and 1! = 1
else // recursion step
    return param_1 * my_recursive_factorial( param_1 - 1 );
}