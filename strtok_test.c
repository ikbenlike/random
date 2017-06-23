#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
    char *a = calloc(1, 11*sizeof(char));
    strcpy(a, "styles.css");
    puts(strtok(a, "."));
    puts(strtok(NULL, "."));
    puts(strsep(&a, "."));
    return 0;
}
