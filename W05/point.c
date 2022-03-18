// Live demo of pointers
// Anosua Roy z5264396
// 2022-03-15

#include <stdio.h>

int main(void) {

    int number;
    int *new_pointer;
    
    number = 73;
    new_pointer = &number;
    
    printf("value of number: %d\n", number); 
    printf("adress of number: %p\n", &number);   
    
    printf("value of new pointer %p\n", new_pointer);
    printf("value stored at the address this is pointing at %d\n", *new_pointer);
    printf("address of pointer: %p\n", &new_pointer);
    
    return 0;
}
