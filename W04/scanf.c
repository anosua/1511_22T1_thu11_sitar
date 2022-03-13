// Live coding demo of using the result of scanf
// Anosua Roy (z5264396)
// 2022-03-08

#include <stdio.h>

int main(void) {
    /*
    int num1, num2;
    int result = scanf("%d %d", &num1, &num2);
    
    printf("result of scanf: %d and value of num: %d\n", result, num1);
    */
    
    int input;

    int input3;
    while (scanf("%d", &input) == 1) {
        
        scanf("%d", &input3);
        printf("scanned in %d\n", input);
    }
    
    return 0;
}
