# include <iostream>
# include <queue>

int main(void)
{
	std::queue<int> num;

	for(int i = 1; i <= 5; i++)
	{
		num.push(i);
	}

	std::cout << "Front of the queue: " << num.front() << std::endl;
	std::cout << "Back of the queue: " << num.back() << std::endl;
	std::cout << "Size of the queue: " << num.size() << std::endl;

	while(!num.empty())
	{
		std::cout << num.front() << " ";
		num.pop();
	}
	std::cout << std::endl;

	return (0);
}