//finds smallest num that is evenly divisible by 1 - 20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int num = 2520, i = 2, check = 0;
	while(i < 20)
	{
		if ((num % i) == 0)
		{
			i++;
			//fprintf(stdout, "%d", i);
		}
		else if ((num % i) != 0)
		{
			i = 2;
			num++;
			//fprintf(stdout, "%d", num);
		}
	}
	fprintf(stdout, "%d", num);
	
	
	return(0);
}