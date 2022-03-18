// Live demo of 2D arrays
// Anosua Roy z5264396
// 2022-03-15

#include <stdio.h>

#define NUM_STU 3
#define NUM_SUBJ 2

int main(void) {

    int student_marks[NUM_STU][NUM_SUBJ] = {{100, 98}, {56, 54}, {2, 4}};
    
    int curr_stu = 0;
    while (curr_stu < NUM_STU) {
        printf("student %d: ", curr_stu);
        int curr_subj = 0;
        while (curr_subj < NUM_SUBJ) {
            
            printf("%d ", student_marks[curr_stu][curr_subj]);
            
            curr_subj++;
        }
        printf("\n");
        curr_stu++;
    }
    
    return 0;
}
