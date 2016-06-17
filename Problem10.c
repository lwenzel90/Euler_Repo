#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int  i , j = 2, counter = 0, ans, check;
	long int primetotal = 0;
	fprintf(stdout, "2\n3\n");
	for(j = 3 ; j <= 2000000; j+=2)
	{
		check = sqrt(j);	
		for ( i = 2; i <= check; i++)
		{
			ans = j % i;
			if (ans == 0)
			{
				break;
			}
			else if ( i == (check))
			{
				//fprintf(stdout, "%d\n", j);
				primetotal += j;
			}
		}
	}
	primetotal += 5;
	fprintf(stdout, "%ld", primetotal);
	return(0);
}