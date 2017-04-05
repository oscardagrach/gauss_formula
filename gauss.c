#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void gauss(unsigned long number)
{
	unsigned long a;
	a = number*(number+1)/2;
	printf("\nResult: %u\n", a);
}

int main(int argc, char* argv[])
{

	int i;
	unsigned long number;
	clock_t t;
	
	if (argc < 2) {
		printf("\nChoose one number!\nExample: ./gauss [number]\n\n");
		return 0;
		}
	if (argc > 2) {
		printf("\nError! Too many args for Gauss formula!!!!\n");
		return 0;
		}

	if (argc < 3) {
		number = strtoul(argv[1], NULL, 10);	
		}
	
	t = clock();
	gauss(number);
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	
	printf("\nCalculation time for Gauss challenge: %f(s)\n", time_taken);
	return 0;
}
