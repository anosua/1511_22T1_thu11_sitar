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
};

struct student *create_student(int stu_id, double mark, char *name);

int main(void) {

    struct student *cedric = create_student(1, 100.34, "Cedric Castelino");
    printf("%s(%d): %lf\n", cedric->name, cedric->zID, cedric->mark);

    return 0;
}

struct student *create_student(int stu_id, double mark, char *name) {
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = stu_id;
    new_student->mark = mark;
    strcpy(new_student->name, name);
    
    return new_student;
}

