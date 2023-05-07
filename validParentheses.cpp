// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

#include <iostream>
#include <string>
using namespace std;




int main(void)
{
    int arr[4] = {1 , 2 , 3, 5}; 
    int j = sizeof(arr)  / sizeof(int);
    int temp = 0;
    int mid= j / 2;
    for (int i = 0; i < mid; i++)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        j--;
    }
    for (int i = 1; i <= (sizeof(arr)  / sizeof(int)); i++)
    {
        cout << arr[i] << endl;
    }
    return (0);
}