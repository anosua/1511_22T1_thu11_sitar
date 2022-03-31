// Live demo of string explanation
// Anosua Roy z5264396
// 2022/03/29

#include <stdio.h>

#define MAX_LINE_LENGTH 100

int main(void) {
    
    char my_string[MAX_LINE_LENGTH] = {'h', 'e', 'l', 'l', 'o', '\n', '!', '\0'};
    char another_string[MAX_LINE_LENGTH] = "hello!!!";
    
    printf("%s", my_string);
    printf("%s", another_string);
    
    return 0;
}
