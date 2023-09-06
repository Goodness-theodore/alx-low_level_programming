#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loops to make grind
 * @width: width of the grind
 * @height: height of the grind
 *
 * Return: 0.
 */
int **alloc_grid(int width, int height)
{
	int i, n, m, p;
	int **q;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		q = (int **) malloc(height * sizeof(int *));
		if (!q)
		{
		free(q);
		return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			q[i] = (int *) malloc(width * sizeof(int));
			if (!q[i])
			{
				for (n = 0; n <= i; n++)
					free(q[n]);
				free(q);
				return (NULL);
			}
		}
		for (m = 0; m < height; m++)
		{
			for (p = 0; p < width; p++)
			{
				q[m][p] = 0;
			}
		}
		return (q);
	}
}
