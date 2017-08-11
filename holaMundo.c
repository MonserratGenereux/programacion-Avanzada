#include <stdio.h>

int main(int argn, char **argv){
	//int argn numero de parametros +1 (el nombre)
	// char ** argv; dirección de una dirección
	//char nombre [20] puedes guardar 19 letras, se usa en lugar de string
	//Pointer *, char * p
	//p=&a;  guardando en p la direccion de a
	//*p= 'B', se guarda el contenido
	
	for (int i = 0; i < argn; ++i)
	{
		printf("Hello World %s \n", argv[i]);
	}
	return 0;
}
