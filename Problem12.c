#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long long int currentfacto, count = 0, i = 1 , j, half;
	while (count <= 500)
	{
		count = 0;
		currentfacto = ((i*i) + i) / 2;
		if(sqrt(currentfacto ) != 0)
		{
			half = ceil(sqrt(currentfacto));
		}
		for (j = 1; j <= half; j++ )
		{
			if ((currentfacto % j) == 0)
			{
				count = count + 2;
			}
		}
		
		i++;
		//printf("%lld = %lld\n", currentfacto, count);
	}
	printf("%lld\n", currentfacto);
	return(0);
}