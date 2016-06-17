#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char string[3];
	int i = 0, n = 0, j, hormax = 0, vertmax = 0, leftdiag = 0, rightdiag = 0, tmp;
	FILE *fp;
	fp = fopen("numgrid.txt", "r");
	int grid[20][20];//row then column
	for (i = 0; i < 20; i++) 
	{
		for (j = 0; j < 20; j++)
		{
			fgets(string, 4, fp);
			grid[i][j] = atoi(string);
		}
	}
	i = 0;
	//HORIZONTAL
	while (i < 20)//row go to 20 column must end at 16
	{
		while(n  < 17 )
		{
			tmp = grid[i][n] * grid[i][n + 1] * grid[i][n + 2] * grid[i][n + 3];
			//fprintf(stdout, "%d*%d*%d*%d\n", grid[i][n], grid[i][n + 1], grid[i][n + 2], grid[i][n + 3]);
			n++;
			if (hormax < tmp)
			{
				hormax = tmp;
			}
		}
		i++;
		n = 0;
	}
	
	//VERTICAL
	i = 0;
	n = 0;
	while (i < 20)//column go to 20 row must end at 16
	{
		while(n < 17)
		{
			tmp = grid[n][i] * grid[n+1][i] * grid[n+2][i] * grid[n+3][i];
			//fprintf(stdout, "%d*%d*%d*%d\n",grid[n][i],  grid[n+1][i],  grid[n+2][i], grid[n+3][i]  );
			n++;
			if (vertmax < tmp)
			{
				vertmax = tmp;
			}
		}
		i++;
		n = 0;
	}
	//Diagonal to the left to right \\   /
	i = 0;
	n = 0;
	while (i < 17)
	{
		while(n < 17)
		{
			tmp = grid[n][i] * grid[n+1][i+1] * grid[n+2][i+2] * grid[n+3][i+3];
			//fprintf(stdout, "%d * %d * %d * %d\n", grid[n][i], grid[n+1][i+1], grid[n+2][i+2], grid[n+3][i+3]);
			n++;
			if (leftdiag < tmp)
			{
				leftdiag = tmp;
			}
		}
		i++;
		n = 0;
	}
	//Diagonal to the right to right \\   /
	i = 0;
	n = 0;
	while (i < 17)
	{
		while(n < 17)
		{
			tmp = grid[n+3][i] * grid[n+2][i+1] * grid[n+1][i+2] * grid[n][i+3];
			//fprintf(stdout, "%d * %d * %d * %d\n", grid[n+3][i], grid[n+2][i+1], grid[n+1][i+2], grid[n][i+3]);
			n++;
			if (rightdiag < tmp)
			{
				rightdiag = tmp;
			}
		}
		i++;
		n = 0;
	}
	fprintf(stdout, "%d\n", rightdiag);
	fprintf(stdout, "%d\n", leftdiag);
	
	fprintf(stdout, "%d\n", vertmax);
	fprintf(stdout, "%d\n", hormax);
	return(0);
}