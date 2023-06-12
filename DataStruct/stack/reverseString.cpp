#include <iostream>
#include <stack>

std::string reverseStr(std::string &s)
{
	std::stack<char> st;
	for(char c : s){
		st.push(c);
	}
	std::string reversed;
	while(!st.empty())
	{
		reversed += st.top();
		st.pop();
	}
	return (reversed);
}

int main(void)
{
	std::string s = "Hello World!";
	std::cout << reverseStr(s) << std::endl;
}