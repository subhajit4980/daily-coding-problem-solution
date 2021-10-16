/*  This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i
 of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be 
[120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

explanation:-
Input: arr[]  = {1, 2, 3, 4, 5}
Output: prod[]  = {120, 60, 40, 30, 24 }
2 * 3 * 4 * 5  product of other array 
elements except 1 is 120
1 * 3 * 4 * 5  product of other array 
elements except 2 is 60
1 * 2 * 4 * 5  product of other array 
elements except 3 is 40
1 * 2 * 3 * 5  product of other array 
elements except 4 is 30
1 * 2 * 3 * 4  product of other array 
elements except 5 is 24  */

// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

/* Function to print product array
for a given array arr[] of size n */
void productArray(int arr[], int n)
{

	// Base case
	if (n == 1) {
		cout << 0;
		return;
	}

	int i, temp = 1;

	/* Allocate memory for the product array */
	int* prod = new int[(sizeof(int) * n)];

	/* Initialize the product array as 1 */
	memset(prod, 1, n);

	/* In this loop, temp variable contains product of
	elements on left side excluding arr[i] */
	for (i = 0; i < n; i++) {
		prod[i] = temp;
		temp *= arr[i];
	}

	/* Initialize temp to 1
	for product on right side */
	temp = 1;

	/* In this loop, temp variable contains product of
	elements on right side excluding arr[i] */
	for (i = n - 1; i >= 0; i--) {
		prod[i] *= temp;
		temp *= arr[i];
	}

	/* print the constructed prod array */
	for (i = 0; i < n; i++)
		cout << prod[i] << " ";

	return;
}

// Driver Code
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The product array is: \n";
	productArray(arr, n);
}

