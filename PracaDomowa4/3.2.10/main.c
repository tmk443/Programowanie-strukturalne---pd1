#include <stdio.h>
#include <stdlib.h>
double* allocDouble()
{
	double* newDouble = (double*) malloc (sizeof(double));
	return newDouble;
}
int main()
{
    allocDouble();
    return 0;
}
