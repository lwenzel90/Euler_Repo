#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, sum = 0;
	for(i = 0; i < 1000; i+=3)
	{
		if ((i % 5) == 0)
		{
			continue;
		}
		sum += i;
		fprintf(stdout, "%d ", i);
	}
	fprintf(stdout, "\ncount is %d\n", sum);
	for(i = 0; i < 1000; i+=5)
	{
		
		sum  += i;
		fprintf(stdout, "%d ", i);
	}
	fprintf(stdout, "\ncount is %d\n", sum);
}