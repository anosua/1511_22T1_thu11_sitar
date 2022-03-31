// Live demo of fgets explanation
// Anosua Roy z5264396
// 2022/03/29

#include <stdio.h>

#define MAX_LINE_LENGTH 10

int main(void) {

    printf("Enter a line\n");
    char line[MAX_LINE_LENGTH];
    fgets(line, MAX_LINE_LENGTH, stdin);
    
    printf("scanned in: %s", line);

    return 0;
}
