# include <iostream>
# include <stack>
# include <vector>


std::vector<int> findNextGreater(std::vector<int> num)
{
	int s = num.size();
	std::vector<int> res(s, -1);
	std::stack<int> st;

	for(int i = 0; i <= s; i++)
	{
		while(!st.empty() && num[i] > num[st.top()])
		{
			res[st.top()] = num[i];
			st.pop();
		}
		st.push(i);
	}
	return res;
}

int main(void)
{
	std::vector<int> nums = {4, 5, 2, 25};
	std::vector<int> r = findNextGreater(nums);

	std::cout << "Input Array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Next Greater Elements: ";
    for (int ar : r) {
        std::cout << ar << " ";
    }
    std::cout << std::endl;

    return 0;
}