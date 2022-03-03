// Make a struct with meridiem, hour, minute
// Anosua Roy z5264396
// 2022-3-1

#include <stdio.h>

struct time {
    char meridiem;
    int hour;
    int minute;
};

int main(void) {
    struct time anosua_class;
    anosua_class.meridiem = 'a';
    anosua_class.hour = 11;
    anosua_class.minute = 5;
    
    printf("anosua's class: %.2d:%.2d%cm\n", 
           anosua_class.hour, 
           anosua_class.minute, 
           anosua_class.meridiem
    );
    
    struct time help_seesion;
    struct time lecture;
    
    return 0;
}
