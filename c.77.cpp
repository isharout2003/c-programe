// C program to sort 2D array row-wise 
#include <stdio.h> 

// This function sort 2D array row-wise 
void sortRowWise(int m[][4], int r, int c) 
{ 
	int t = 0; 
	
	// loop for rows of 2d array 
	for (int i = 0; i < r; i++) { 
		
		// loop for column of 2d array 
		for (int j = 0; j < c; j++) { 
			
			// loop for comparison and swapping the elements 
			for (int k = 0; k < c - j - 1; k++) { 
				
				if (m[i][k] > m[i][k + 1]) { 
					
					// swap the elements 
					t = m[i][k]; 
					m[i][k] = m[i][k + 1]; 
					m[i][k + 1] = t; 
				} 
			} 
		} 
	} 

	// print the sorted matrix 
	printf("\n Row-Wise Sorted 2D Array \n"); 
	for (int i = 0; i < r; i++) { 
		for (int j = 0; j < c; j++) 
			printf(" %d", m[i][j]); 
		printf("\n"); 
	} 
} 

// Driver code 
int main() 
{ 
	// Input Array 
	int arr[][4] = { { 8, 5, 7, 2 }, 
					{ 7, 3, 0, 1 }, 
					{ 8, 5, 3, 2 }, 
					{ 9, 4, 2, 1 } }; 

	// print input array 
	printf("\n Input Array \n"); 
	for (int i = 0; i < 4; i++) { 
		for (int j = 0; j < 4; j++) { 
			printf(" %d", arr[i][j]); 
		} 
		printf("\n"); 
	} 

	// sortRowWise(arr, 4, 4) accepts 2D-array, no of rows 
	// and columns as input and print a row-wise sorted 2D 
	// array 
	sortRowWise(arr, 4, 4); 
	return 0; 
}

