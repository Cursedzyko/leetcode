/*Palindrome
An integer is a palindrome when it reads the same forward and backward.

For example, 121 is a palindrome while 123 is not.*/
#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string num = std::to_string(x);
        std::string revnum = num;
		std::reverse(revnum.begin(), revnum.end());
		if (num == revnum)
			return (true);
		else
			return false;
    }
};

int main(void)
{
	Solution num;

	std::cout << num.isPalindrome(113) << std::endl;

}