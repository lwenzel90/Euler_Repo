#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i = 0, j;
	char c;
	long long int tmpresult = 1, result = 0;
	char thousand[1000];
	FILE *fp;
    fp = fopen("Dig1000.txt", "r");
	while (i <= 1000)
	{
		c = fgetc(fp);
		thousand[i] = c - 48;
		i++;
	}
	fclose(fp);
	for(i = 0; i < 988; i++)
	{
		for(j = 1; j <= 13; j++)
		{
			tmpresult *= thousand[(j + i)];
		}
		if(tmpresult > result)
		{
			result = tmpresult;
			
		}
		tmpresult = 1;
	}
	fprintf(stdout, "%llu", result);
	
}