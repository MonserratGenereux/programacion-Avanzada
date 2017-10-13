#include <stdlib.h>
#include <stdio.h>
#include "qsort.h"
#include <string.h>

typedef struct s{
	char *name;
	int matricula;
}Student;

int cmpNames(void const *element1, void const *element2){
	Student *student1=(Student *)element1;
	Student *student2=(Student *)element2;
	return strcmp(student1->name,student2->name);
}

int cmpMatriculas(void const *element1, void const *element2){
	Student *student1=(Student *)element1;
	Student *student2=(Student *)element2;
	return student1->matricula - student2->matricula;
}

int main(int argc, char **argv) {

  char order[2];		
  Student group[3];
  group[0].name = strdup("Juanito");
  group[0].matricula=17;

  group[1].name = strdup("Pedro");
  group[1].matricula=4;

  group[2].name = strdup("Mariana");
  group[2].matricula=2;
  printf("Give me the order: ");
  scanf("%s",order);

  if(!strcmp(order,"name")){
  	qsort(group,3,sizeof(Student),cmpNames);
  }if(!strcmp(order,"matricula")){
  	qsort(group,3,sizeof(Student),cmpMatriculas);
  }

  for (int i = 0; i < 3; ++i)
  {
  	printf("Student %s %d\n", group[i].name,group[i].matricula);
  }
  return 0;
}
