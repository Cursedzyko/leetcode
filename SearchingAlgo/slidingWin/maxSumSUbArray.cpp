#include <iostream>
#include <vector>
using namespace std;

int maxSumSubArray(vector<int> nums, int k)
{
	int wSum = 0;
	int maxSum = 0;

	for(int i =0; i < k; i++)
		wSum += nums[i];
	for(int i = k; i < nums.size(); i++ )
	{
		wSum += nums[i] - nums[i - k];
		maxSum = max(maxSum, wSum);
	}
	return maxSum;
}

int main(void)
{
	vector<int> nums = {2, 1, 5, 1, 3, 2};

	cout << maxSumSubArray(nums, 3) << endl;
	return 0;

}