#include <stdlib.h>
#include <stdio.h>
#include "kata-2.h"
#include <string.h>


int contains(char * string1, char * containsString1){
	char *current;
    char *equalsString1 = strdup(containsString1);
    int i;
    printf("equalsString1 %s\n", equalsString1);  
    printf("containsString1 %s\n", containsString1);    

    for (current = string1; *current != '\0'; current++) {
        int found = 0;
        for (i = 0; equalsString1[i] != '\0'; i++) {
            if(*current == equalsString1[i]) {
                equalsString1[i] = '*';
                found = 1;
                break;
            }
          
        } 
        if(!found) {
            return 0;
        }
    }

    return 1;
}

