#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
//one3, two3, six3, ten3 nine4, four4, five4,  seven5, eight5,  three5
// eleven6, twelve6, fifteen7, sixteen7 thirteen8, fourteen8, eighteen8, nineteen8,
// forty5, fifty5, sixty5, twenty6, thirty6, eighty6, ninety6, seventy7, 
// hundred7, thousand8

	int count = 0, i, singles, tens, hundreds;
	int s[20] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
	int d[10] = {0, 3, 6, 6, 5, 5, 5, 7, 6, 6};
	int h = 7;
	int t = 8;
	
	for (i = 0; i <= 1000; i++)
	{
		singles = 0;
		tens = 0;
		hundreds = 0;
		singles = i % 10;
		tens = ((i % 100) - singles) / 10;
		hundreds = ((i % 1000) - (singles + tens)) / 100;
		printf("%d", tens);
		if( hundreds != 0 && tens != 1)//if it has a hundreds place 
		{
			count += (s[hundreds] + h + d[tens] + s[singles]);//one hundred "no and" twenty four
			if (tens != 0 || singles != 0)//add equals 3 chars if and needed 
			{
				count += 3;
			}
			continue;
		}
		else if( hundreds != 0 && tens == 1)//if it has a hundreds place  
		{
			count += (s[hundreds] + h + s[singles + 10]);//one hundred "no and" twenty four
			if (tens != 0 || singles != 0)//add equals 3 chars if and needed 
			{
				count += 3;
			}
			continue;
		}
		else if(tens != 0 && tens != 1)// 20 and up 
		{
			count += (d[tens] + s[singles]);
			continue;
		}
		else if (tens == 1)
		{
			count += s[singles + 10];
			continue;
		}
		else 
		{
			count += s[singles];
		}
	
	}
	count += t + s[1];
	printf("%d", count);
	return(0); 
}