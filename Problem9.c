//N < M 
//A = M^2 - N^2
//B = (MN)2
//c = M^2+N^2
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int m = 2, n = 1, a, b, c, result = 0;
	while (result != 1000)
	{
		for (n = 1; n < m; n++)
		{
			a = (pow(m, 2)) - (pow(n,2));
			b = (m*n)*2;
			c = (pow(m, 2)) + (pow(n,2));
			result = a + b + c;
			if (result == 1000)
			{
				fprintf(stdout, "%d %d %d %d %d %d\n",n, m, a , b, c, result);
				fprintf(stdout, "%d", (a*b*c));
				break;
			}
		}
		m++;

	}


	return(0);
}