// Live example of struct pointers

#include <stdio.h>
// for strcpy
#include <string.h>

#define MAX_NAME_LENGTH 100

struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
};

int main(void) {
    
    struct student stu;
    
    struct student *stu_pointer;
    stu_pointer = &stu;
    
    (*stu_pointer).zID = 5264396;
    (*stu_pointer).wam = 29.54;
    strcpy((*stu_pointer).name, "Frankie");
    
    printf("%s(%d): %lf\n", (*stu_pointer).name, (*stu_pointer).zID, (*stu_pointer).wam);
    
    // shortcut for dereferencing and accessing a feild
    
    stu_pointer->zID = 45234;
    stu_pointer->wam = 1000.333;
    strcpy(stu_pointer->name, "Tom Kunc");
    
    printf("%s(%d): %lf\n", stu_pointer->name, stu_pointer->zID, stu_pointer->wam);
    return 0;
}
