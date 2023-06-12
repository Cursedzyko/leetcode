# include <iostream>
# include <queue>
# include <stack>

std::queue<int> reverseQueue(std::queue<int> &num)
{
	std::stack<int> tmp;

	while(!num.empty())
	{
		tmp.push(num.front());
		num.pop();
	}

	while(!tmp.empty())
	{
		num.push(tmp.top());
		tmp.pop();
	}
	return (num);
}

void displayQueue(const std::queue<int>& q) {
    std::queue<int> temp = q;
    while (!temp.empty()) {
        std::cout << temp.front() << " ";
        temp.pop();
    }
    std::cout << std::endl;
}

int main(void)
{
	std::queue<int> num;
	num.push(1);
	num.push(2);
	num.push(3);
	num.push(4);
	std::queue<int> num1 = reverseQueue(num);

	displayQueue(num1);

	return (0);
	
}