#include <vector>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
	int i = 0;
	int j = nums.size() - 1;
	while(i < j)
	{
		if (nums[i] + nums[j] > target)
			j--;
		else if (nums[i] + nums[j] < target)
			i++;
		else if (nums[i] + nums[j] == target)
			return {i, j};
	}
	return {-1, -1};
}

int main(void)
{
	vector<int> nums = {2, 7, 11, 15};

	vector<int> res = twoSum(nums, 18);

	for(int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	cout << endl;
}