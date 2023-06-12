#include <iostream>

// Summing the Elements of an Array Recursively
// Suppose, for example, we are given an array, A, of n integers that we want to sum
// together. We can solve this summation problem using linear recursion by observing
// that the sum of all n integers in A is equal to A[0], if n = 1, or the sum of the first n−
// 1 integers in A plus the last element in A. 

int LinearSum(int *arr, int n)
{
	if (n == 1)
		return arr[0];
	else
		return (LinearSum(arr, n - 1) + arr[n - 1]);
}

int main(void)
{
	int arr[2] = {1, 2};
	std::cout << LinearSum(arr, 2) << std::endl;
}