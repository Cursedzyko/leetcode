# include <iostream>
# include <stack>
# include <vector>
using namespace std;

class Solution {
private:
    int op(string s)
    {
        if (s == "+" || s == "-")
            return 1;
        if (s == "/" || s == "*")
            return 1;
        return 0;
    }
    int operation(int a, int b, string s)
    {
        int res;
        if (s == "+")
            res = b + a;
        else if (s == "-")
            res = b - a;
        else if (s == "/")
            res = b / a;
        else if (s == "*")
            res = b * a;
        return res;
        
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++)
        {
            if (!op(tokens[i]))
                st.push(stoi(tokens[i]));
            else
			{
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                st.push(operation(op1, op2, tokens[i]));
			}
        }
        return st.top();
    }
};

int main(void)
{
	Solution s;
	vector<string> su = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
	cout << "Result: " << s.evalRPN(su) << endl;
}