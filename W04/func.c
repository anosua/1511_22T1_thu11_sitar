// Live coding demo of using functions
// Anosua Roy (z5264396)
// 2022-03-08

#include <stdio.h>

void calc_days(int year1, int year2, int month1, int month2, int day1, int day2);

int main(void) {
    
    calc_days(2003, 2004, 12, 4, 28, 26);
    calc_days(2005, 2004, 12, 6, 28, 26);
    calc_days(2003, 2004, 12, 4, 28, 26);
    
    return 0;
}

// prints out the diff between two birthdays in days.
void calc_days(int year1, int year2, int month1, int month2, int day1, int day2) {

    printf("diff in days: %d\n", 
            (year1 - year2) * 365 + 
            (month1 - month2) * 30 + 
            (day1 - day2)
    );
    
}
