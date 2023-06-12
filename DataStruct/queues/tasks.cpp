# include <iostream>
# include <queue>

void addNewTask(std::queue<std::string> &q, std::string t = "Null")
{
	q.push(t);
}

void endTask(std::queue<std::string> &q)
{
	if (q.empty())
		std::cout << " ALL tasks done!\n";
	else
	{
		q.pop();
	}
}

void showTasks(std::queue<std::string> &q)
{
	if (q.empty())
	{
		endTask(q);
		return ;
	}
	while(!q.empty())
	{
		std::cout << q.front() << std::endl;
		q.pop();
	}
}

int main(void)
{
	std::queue<std::string> q;

	addNewTask(q, "Wake up");
	addNewTask(q, "Hello");
	addNewTask(q, "H123123");
	endTask(q);
	showTasks(q);
}