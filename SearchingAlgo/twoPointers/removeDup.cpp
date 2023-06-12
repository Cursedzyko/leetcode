#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{
	int j = 0;
	for(int i = 0; i < nums.size(); i++)
	{
		if (!j || nums[i] > nums[j - 1])
		{
			nums[j++] = nums[i];
		}
	}
	return j;
}

int main(void)
{
	vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

	cout << removeDuplicates(nums) << endl;
}