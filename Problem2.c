#include<stdio.h>
#include<stdlib.h>

int main()
{
	int prev1 = 1, prev2 = 2, result, sum = 2;
	for(result = 0; result <= 4000000; )
	{
		result = prev1 + prev2;
		prev1 = prev2;
		prev2 = result;
		if(result < 4000000 && (result % 2) == 0 )
		{
		sum += result;
		fprintf(stdout, "%d ", result);
		}
	}
	fprintf(stdout, "\n%d\n", sum);
}