// Live coding demo of using arrays
// Anosua Roy (z5264396)
// 2022-03-08

#include <stdio.h>

#define TOTAL_NUM 10

int main(void) {

    int inputs[TOTAL_NUM] = {0};
    
    int counter = 0;
    while (counter < TOTAL_NUM) {
        
        printf("%d ", inputs[counter]);
        
        counter++;
    }
    printf("\n");
    
    /*
    int counter = 0;
    while (counter < TOTAL_NUM) {
        int curr_num;
        scanf("%d", &curr_num);
        inputs[counter] = curr_num;
        
        counter++;
    }
    */
    
    int lowest_number = inputs[0];
    int highest_number = inputs[0];
    counter = 1;
    while (counter < TOTAL_NUM) {
        
        if (inputs[counter] < lowest_number) {
            lowest_number = inputs[counter];
        } else if (inputs[counter] > highest_number) {
            highest_number = inputs[counter];
        }
        
        counter++;
    }
    
    printf("hi: %d, low: %d, mid: %d\n", 
            highest_number, lowest_number, 
            (highest_number + lowest_number)/ 2
    );
    

    return 0;
}
