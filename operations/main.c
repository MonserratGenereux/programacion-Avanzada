#include <stdlib.h>
#include <stdio.h>
#include "operations.h"
#include "string.h"
#define MAX_LENGTH 10
#define printDebug(msg) do {char *value= getenv("OPER_DEBUG") if (!strcmp(value,"t")) printf("%s",message);} while (0)
int suma(int a, int b){
	return a+b;
}
int resta(int a, int b){
	return a-b;
}
/* Add function signatures here */

int main(int argc, char **argv) {
  /* Start your code here */
	char *operationName;
	char message[200];
	int operator1,operator2;
	int(*operation)(int,int);
	char **operationNames;
	char ** messages;
	char ** lang;

	lang=getenv("OPER_LANG")
	operationName=malloc(sizeof(char)*MAX_LENGTH);
	printf("%s\n", messages[0]);
	scanf("%s",&operationName);
	scanf("%d",&operator1);
	scanf("%d",&operator2);

	sprintf(message,"operationName = %s\n", operationName);
	printDebug(message);
	sprintf(message,"operator1 = %d\n", operator1);
	printDebug(message);
	sprintf(message,"operator2 = %d \n", operator2);
	printDebug(message);

	if(!strcmp(operationName,operationNames[0])){
		operation=suma;
	}
	if(!strcmp(operationName,operationNames[1])){
		operation=resta;
	}
	printf("%d\n", operation(operator1,operator2));

  return 0;
}
