#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "kata1.h"

int lastWordLength(char * phrase) {
    int len = strlen(phrase);
	int count = 0;
    int i;
    for(i = len - 1; i > 0; i--) {
        if(phrase[i] == ' ') {
            break;
        }
        else {
            count++;
        }
    }
    return count;
}