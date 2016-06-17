//Finds lattice paths using pascal triangle method
#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long int **grid;
	long long int i, x, y;
	grid = (long long int **) calloc(30, sizeof(long long int*));
	for (i = 0; i < 30; i++)
	{
		grid[i] = (long long int *) calloc(30, sizeof(long long int));//grid[21][21];
	}

	//Creates 1's in the first row
	for(x = 0; x < 30; x++)//grid[x][y];
	{
		grid[x][0] = 1;
	}
	
	//Creates 1's in the first column
	for(y = 0; y < 30; y++)
	{
		grid[0][y] = 1;
	}
	
	
	//Goes down each row going adding (xy) and (x+1,y-1)
	//Then it creates a new one to the left of the original x so (x+1, y)
	x = 0; y = 1;
	while (x != 22)
	{
		y = 1;
		
		while (y != 22)
		{
			grid[x+1][y] = grid[x][y] + grid[x+1][y-1];
			y++;
			
		}
		x++;
	}
	printf("%lld", grid[20][20]);
	
	return(0);
}
