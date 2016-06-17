//Find largest palindrome that is yeilded by 3dig * 3dig = palnum
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	long int palindrome = 997799, check = 0, counter = 3, i, modcheck, divcheck;
	
	while(check != 1)
	{
		for(i = 100; i < 1000; i++)
		{
			modcheck = palindrome % i;
			if (modcheck == 0)
			{
				divcheck = palindrome / i;
				if (divcheck > 99 && divcheck < 1000)
				{
					fprintf(stdout, "%lu\n", palindrome);
					fprintf(stdout, "%lu\n", divcheck);
					fprintf(stdout, "%lu\n", i);
					return(0);
				}
				else
				{
					continue;
				}
			}
		}
		if ((counter % 100) == 0)
		{
			palindrome = palindrome - 11;
		}
		else if((counter % 10) == 0)
		{
			palindrome = palindrome - 110;
		}
		else
		{
			palindrome = palindrome - 1100;
		}
		counter++;
	}
}