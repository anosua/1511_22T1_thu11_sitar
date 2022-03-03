// Compute area of a rectangle using ints
// Anosua Roy (z5264396) 
// 2022-Feb-22

#include <stdio.h>

int main(void) {
    /*
    int a = 12;
    printf("%d\n", a); // we tell the user something
    
    int b;
    scanf("%d\n", &b); // the user tells us something
    */
    int length;
    int width;
    printf("Enter the length:\n");
    scanf("%d", &length);
    
    printf("Enter the width:\n");
    scanf("%d", &width);
    
    printf("The area of rectangle: %d\n", length * width);
    return 0;
}
