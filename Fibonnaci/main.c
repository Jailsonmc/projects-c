#include <stdio.h>
#include <stdlib.h>
#include "fib.h"

int main(int argc, char* argv[]){
	int n = atoi(argv[1]);
	printf("%f", fib(n));
	printf("\n");
} 
