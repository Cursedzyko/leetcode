/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:11:31 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/03 14:58:11 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



void printArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void insertionSort(int *arr, int size){ // sort array of size
	int j, tmp;

	for(int i = 1; i < size; i++) // insertion loop
	{
		tmp = arr[i]; // current element to insert
		std::cout <<"Current element to sort: " << tmp << std::endl;
		j = i - 1; // start at previous element
		while(j >= 0 && arr[j] > tmp) // while arr is out of order
		{
			arr[j + 1] = arr[j]; // move element to the right
			std::cout << "SubArray in inner loop: ";
			printArray(arr, size);
			j--;
		}
		arr[j + 1] = tmp; // proper place to the current
		std::cout << "Array in outer loop: ";
		printArray(arr, size);
	}
}

int main(void)
{
	int arr[6] = {3, 3, 2, 1, 5 ,5};

	std::cout << "Array: ";
	printArray(arr, sizeof(arr) / sizeof(int));
	insertionSort(arr, 6);
	std::cout << "Sorted Array: ";
	printArray(arr, sizeof(arr) / sizeof(int));
}



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode result(0);
        while(head)
        {
            ListNode *iter = &result;
            while(iter->next && iter->next->val < head->val)
                iter = iter->next;
            ListNode *next = head->next;
            head->next = iter->next;
            iter->next = head;
            head = next;
        }
        return result.next;
    }
};*/