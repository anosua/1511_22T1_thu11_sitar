// Live coding demo of using arrays
// Anosua Roy (z5264396)
// 2022-03-08

#include <stdio.h>

#define TOTAL_NUM 10

int main(void) {
    int number[TOTAL_NUM] = {0};
    
    // scan numbers into our array
    int num_scanned_in = 0;
    while (num_scanned_in < TOTAL_NUM) {
        int input;
        scanf("%d", &input);
        number[num_scanned_in] = input;
        
        num_scanned_in++;
    }
    
    int count = 0;
    int high = number[0];
    int low = number[0];
    while (count < TOTAL_NUM) {
        
        if (low > number[count]) {
            low = number[count];
        }
        
        if (high < number[count]) {
            high = number[count];
        }
        
        count++;
    }
    
    printf("hi: %d, lo: %d, mid: %d\n", high, low, (high + low)/2);
    
    return 0;
}
