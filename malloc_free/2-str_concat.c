#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2) {
    int ls1 = 0, ls2 = 0, i, j;

    while (s1[ls1] != '\0') {
        ls1++;
    }
    
  
    while (s2[ls2] != '\0') {
        ls2++;
    }
    

    char *result = malloc((ls1 + ls2 + 1) * sizeof(char));
    if (result == NULL) {
        return NULL; 
    }
    

    for (i = 0; i < ls1; i++) {
        result[i] = s1[i];
    }
    
    for (j = 0; j < ls2; j++) {
        result[ls1 + j] = s2[j];
    }
  
    result[ls1 + ls2] = '\0';
    
    return result;
}
