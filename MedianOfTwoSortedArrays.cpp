#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
		for (auto num:nums1)
			res.push_back(num);
		for (auto num:nums2)
			res.push_back(num);
		sort(res.begin(), res.end());
		if (res.size() % 2 == 1)
			return (res[res.size() / 2]);
		else
			return ((res[(res.size() / 2) - 1] + res[res.size() / 2]) / 2.0);
    }
};

int main(void)
{
	vector<int> nums1{1,2};
	vector<int> nums2{3};
	Solution n;
	cout << n.findMedianSortedArrays(nums1, nums2) << endl;
}