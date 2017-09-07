#include <stdlib.h>
#include <stdio.h>
#include "proyecto.h"
#include <string.h>

/*
	*Proyect - reverse string
	*Given a  string return the same string but in reverse form 
	*@param:
		*string: string
	*@return:
		*string in reverse form
*/
char * reverse(char * string){
	char *reverse = malloc(strlen(string));
	int j=0;
	for (int i = strlen(string)-1; i >=0; --i)
	{
		strcpy(&reverse[j], &string[i]);
        reverse[j+1]='\0';
        j++;        
	}
	printf("%s\n", reverse);
	
	return reverse;
}
