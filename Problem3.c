#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	long long int max = 600851475143;
	int i = 3, j, lastprime;
	while( max > 10000)
	{
		if ((max % i) == 0)
		{
			max = max / i;
			for(j = 3; j < i; j++)
			{
				if((i % j) == 0)
				{
					break;
				}
				else if(j == (i - 1))
				{
					lastprime = i;
				}
			}
		}
		i++;
	}
	fprintf(stdout, "%d", max);
}