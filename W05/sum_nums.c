// Live demo of pointers and functions
// Anosua Roy z5264396
// 2022-03-15

#include <stdio.h>

void find_sum_prod(int *sum, int *prod, int a, int b);

int main(void) {
    int first_num = 42;
    int secon_num = 100;
    int result_sum = 0;
    int result_prod = 0;
    
    // TODO: call the function here
    printf("**BEFORE FUNCTION**\n");
    printf("result_sum: %d, result_prod %d\n", result_sum, result_prod);
    
    int *pointer_to_prod = &result_prod;
    
    find_sum_prod(&result_sum, pointer_to_prod, first_num, secon_num);
    
    printf("**AFTER FUNCTION**\n");
    printf("result_sum: %d, result_prod %d\n", result_sum, result_prod);
    
    return 0;
}

void find_sum_prod(int *sum, int *prod, int a, int b) {
    *sum = a + b;
    *prod = a * b;
}
