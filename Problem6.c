#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	long int numgroup, squaregroup, result;
	squaregroup = (100 * (101) * (201)) / 6;
	numgroup = pow(((100 * 101) / 2), 2);
	result = numgroup - squaregroup;
	fprintf(stdout, "%ld", result);
	return (0);
}