// C program interchange the elements 
// of first and last in a matrix 
// across rows.
#include <stdio.h>

#define n 3

// Function to swap the element 
// of first and last row
void interchangeFirstLast(int m[][n])
{
	int rows = n;

	// Swapping of element between first
	// and last rows
	for (int i = 0; i < n; i++) 
	{
		int t = m[0][i];
		m[0][i] = m[rows - 1][i];
		m[rows - 1][i] = t;
	}
}

// Driver code
int main()
{
	// Input matrix
	int m[n][n] = {{6, 3, 1}, 
				{4, 5, 2}, 
				{2, 4, 9}};

	// Printing the input matrix
	printf("Input Matrix: \n");
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	// call interchangeFirstLast(m) function.
	// This function swap the element of 
	// first and last row
	interchangeFirstLast(m);

	// Printing the original matrix
	printf("\nOutput Matrix: \n");
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

