#include <iostream>
#include <stack>

void printStack(std::stack<int> res)
{
	std::stack<int> tmp;
	while(res.empty() == false)
	{
		tmp.push(res.top());
		res.pop();
	}

	while(tmp.empty() == false)
	{
		int x = tmp.top();
		std::cout << x << " ";
		tmp.pop();
		res.push(x);
	}
	std::cout << std::endl;
}

int main()
{
	std::stack<int> res;

	res.push(1);
	res.push(2);
	res.push(3);
	res.push(100);
	// std::cout << res.top();
	// printStack(res);
}