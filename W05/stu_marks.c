// Live demo of pointers and functions
// Anosua Roy z5264396
// 2022-03-15

#include <stdio.h>

int *max(int *a, int *b);

int main(void) {
    int my_number = 100;
    int your_number = 2;
    
    // TODO: call the function here
    int *result = max(&my_number, &your_number);
    
    printf("result = %p\n", result);
    printf("value at %p: %d\n", result, *result);
    
    return 0;
}

int *max(int *a, int *b) {
    if (*a > *b) {
        return a;
    }
    
    return b;
}
