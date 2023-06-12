#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
		int n = nums.size();
		std::sort(nums.begin(), nums.end());

		for(int i = 0; i < n - 2; i++)
		{
			int target = -nums[i];
			int front = i + 1;
			int back = n - 1;
			while(front < back)
			{
				int sum = nums[front] + nums[back];
				if (sum < target)
					front++;
				else if (sum > target)
					back--;
				else{
					vector<int> peace = {nums[i], nums[front], nums[back]};
					res.push_back(peace);
					while(front < back && nums[front] == peace[1]) // skip duplicates num 2
						front++;
					while (back > front && nums[back] == peace[2])// skip duplicates num 3
						back--;
				}
			}
			while(i + 1 < n && nums[i] == nums[i + 1])// skip duplicates num 1
				i++;

		}
		return res;
    }
};

int main(void)
{
	Solution l;

	vector<int> nums = {-1, 0, 1, 2, -1, -4};

	vector<vector<int>> res = l.threeSum(nums);

	for(int i = 0; i < res.size(); i++)
	{
		for(int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}
}