#include <stdlib.h>
#include <stdio.h>
#include "dict.h"
#include <string.h>

/* Add function signatures here */
typedef struct a {
	char *name;
	int semester;
}Student;

int main(int argc, char **argv) {
  /* Start your code here */
  Dict * students;
  Student st;
  Student *newStudent, *argsStudent;
  int errorCode;
  st.name = strdup("Monserrat Sánchez");
  st.semester = 6;


  students = initDictionary(100, &errorCode);
  upsertDictionary(students,"0101", (void *)&st,sizeof(Student), &errorCode);

  st.name= "Juan";
  st.semester= 8;
  upsertDictionary(students,"0202", (void *)&st,sizeof(Student), &errorCode);

  newStudent =(Student *)getDictionary(students,"0101",sizeof(Student), &errorCode);
  argsStudent=(Student *)getDictionary(students,argv[1],sizeof(Student), &errorCode);
  if(Student==NULL){
  	printf("not found\n");
  }else{
  	printf("name: %s, semester: %d\n", argsStudent->name);
  }
  
  return 0;
}
