#define CTR_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define ROW 9
#define COL 2

void main()
{
	int row, col=6, n = 1;
	for (row = 6;row <= ROW;row++)
	{
		printf("%5d", row);
		col--;
		for (int z = col;z >= COL;z--)
		{
			printf("%5d",z);
		}
		printf("\n");
	}
	printf("%5d",2);
}