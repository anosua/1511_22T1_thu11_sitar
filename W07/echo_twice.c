// Live demo of echo twice
// Anosua Roy z5264396
// 2022/03/29

#include <stdio.h>

#define MAX_LINE 4096

int main(void) {
    char line[MAX_LINE];
    /*
    int len;
    scanf("%d ", &len);
    
    fgets(line, MAX_LINE, stdin);
    
    line[len] = '\0';
    
    printf("Hello there %s!!\n", line);
    */
    while (fgets(line, MAX_LINE, stdin) != NULL) {
        printf("'%s'", line);
        printf("'%s'", line);
    }
    
    return 0;
}
