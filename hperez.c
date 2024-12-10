//Henry Perez
//CSC 341
//Lab 4
#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[]){
	int *values;
	int i;

	values = (int *)malloc(sizeof(int)*5);

	printf("Argc: %p\n", &argc);
	printf("Stack: %p\n", &i);
	printf("Heap: %p\n", &values);
	printf("Uninitialized Data: %p\n", &x);
	printf("Initialized Data: %p\n", &y);

	return EXIT_SUCCESS;
}
