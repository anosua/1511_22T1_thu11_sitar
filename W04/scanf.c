// Live coding demo of using the result of scanf
// Anosua Roy (z5264396)
// 2022-03-08

#include <stdio.h>

int main(void) {
    /*
    int num1, num2;
    int result = scanf("%d %d", &num1, &num2);
    
    printf("result of scan: %d\n", result);
    */
    
    char input;
    int input2;
    while (scanf(" %c %d", &input, &input2) == 2) {
        printf("scanned in %c\n", input);
    }
    
    return 0;
}
