#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int  i , j = 2, counter = 0, ans, check;
	for(j = 2 ; j <= 200000; j++)
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
				counter++;
				if(counter == 9999)
				{
				fprintf(stdout, "%d %d\n",counter, j);					
				}
				
			}
		}
	}
	
	return(0);
}