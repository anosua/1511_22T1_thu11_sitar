// Live coding demo of using functions
// Anosua Roy (z5264396)
// 2022-03-08

#include <stdio.h>

struct birthday {
    int year;
    int month;
    int day;
};

void calc_days(struct birthday birth1, struct birthday birth2);

int main(void) {
    
    struct birthday corey;
    corey.year = 2003;
    corey.month = 3;
    corey.day = 18;
    
    struct birthday jun;
    jun.year = 2003;
    jun.month = 6;
    jun.day = 27;
    
    calc_days(corey, jun);
    clac_days()

    return 0;
}

// prints out the difference between birthdays in days.
void calc_days(struct birthday birth1, struct birthday birth2) {
    printf("Difference: %d days.\n", 
           (birth1.day - birth2.day) + 
           ((birth1.month + birth2.month) * 31) + 
           ((birth1.year - birth2.year) * 365));
}
