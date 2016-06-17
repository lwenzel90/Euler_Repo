/* Adds 100 numbers that are 50 digits long 
*  By Logan Wenzel
*  Euler Problem 13
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, j;
	char c;
	char string[1];//temp for the fgetc to store values 
	int *answer;
	answer = (int*) calloc (i, sizeof(int));
	FILE *fp;
	fp = fopen("fiftynum.txt", "r");//fiftynum is the file holding all of the numbers given by euler 
	int digits[100][70];//100 nums that have a length of 70 but only 50 sig figs 
	for (i = 0; i < 100; i++) 
	{
		c = fgetc(fp);//get first digit 
		for (j = 0; j < 70; j++)
		{
			digits[i][j] = c - 48;// minus 48 cause char to int 
			c = fgetc(fp);
		}
	}
	i = 0;

	for (j = 0 ; j != 25; j++)
	{
		for (i = 69; i != -1; i--)
		{
			answer[i] += digits[j][i];
			if(answer[i] >= 10)
			{
				answer[i - 1] += 1;
				answer[i] -= 10;
			}
		}
	}
	for(i = 0; i != 70; i++)
	{
		printf("%d", answer[i]);	
	}
	
	
	
	return(0);
	
}