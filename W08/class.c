// Live demo of using malloc + structs
// Anosua Roy z5264396
// 2022/04/07

#include <stdio.h>
// for malloc
#include <stdlib.h>
// for strcpy
#include <string.h>

#define MAX_NAME_LENGTH 100

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    
    struct student *next_stu;
};

struct student *create_student(int stu_id, double mark, char *name);
void print_roll(struct student *first_stu);

int main(void) {

    struct student *cedric = create_student(1, 100.34, "Cedric Castelino");
    struct student *ben = create_student(56274832, -23.45, "Benjamin");
    struct student *christian = create_student(33333, 100.90, "Christian T");
    struct student *stud = create_student(562, -100.45, "Stud Muffin");
    struct student *dora = create_student(1232334, 99.22, "Dora the Explorer");
    struct student *harry = create_student(56274832, 56.45, "Harry Potter");
    
    cedric->next_stu = ben;
    ben->next_stu = christian;
    christian->next_stu = stud;
    stud->next_stu = dora;
    dora->next_stu = harry;
    /*
    printf("next to cedric is: %s(%d): %lf\n", cedric->next_stu->name,
                                               cedric->next_stu->zID,
                                               cedric->next_stu->mark);
    
     printf("close to cedric is: %s(%d): %lf\n", cedric->next_stu->next_stu->next_stu->name,
                                               cedric->next_stu->next_stu->next_stu->zID,
                                               cedric->next_stu->next_stu->next_stu->mark);
    */
    
    print_roll(cedric);
    
    return 0;
}

struct student *create_student(int stu_id, double mark, char *name) {
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = stu_id;
    new_student->mark = mark;
    strcpy(new_student->name, name);
    new_student->next_stu = NULL;
    
    return new_student;
}

void print_roll(struct student *first_stu) {
    // go through all of the students in the list
    struct student *curr_student = first_stu;
    while (curr_student != NULL) {
        
        printf("%s(%d): %lf\n", curr_student->name, curr_student->zID, curr_student->mark);
        
        curr_student = curr_student->next_stu;
    }
    
}

