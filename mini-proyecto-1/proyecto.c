#include <stdlib.h>
#include <stdio.h>
#include "proyecto.h"
#include <string.h>

char * reverse(char * string){
	char *array = malloc(strlen(string));
    //char* reverse;
	int j=0;
	for (int i = strlen(string)-1; i >=0; --i)
	{
		strcpy(&array[j], &string[i]);
		//printf("%c\n",array[j] );
		//printf("%c\n", string[i]);
		//printf("%s\n",strcpy(&array[j], &string[i]) );
        array[j+1]='\0';
        j++;

        //printf("%s\n", array);
        
	}
	//printf("%lu\n", strlen(array));
	printf("%s\n", array);
	
	return array;
}

//hello es j
//olleh es i