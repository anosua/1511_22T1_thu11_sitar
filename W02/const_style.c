// Print the size of a rectangle

#include <stdio.h>

#define LENGTH 2
#define WIDTH 4

int main(void) {
    printf("Our rectangle is %d by %d and its area is %d squared", 
           LENGTH, 
           WIDTH, 
           LENGTH * WIDTH
    );
    
    return 0;
}
