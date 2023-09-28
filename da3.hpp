// da3.hpp
// Ash Moore-Schultz
// 2023-09-27
//
// For CS 311 Fall 2023
// Header for Assignment 3 functions

#ifndef FILE_DA3_HPP_INCLUDED
#define FILE_DA3_HPP_INCLUDED

#include <iostream>
#include "llnode.hpp"  // For LLNode
#include <cstddef>     // For std::size_t
#include <functional>  // For std::function

//Looks for the data of the given index in the linked list given
//throws an std::out_of_range if the index is greater then the length of the linked list
template <typename ValueType>
ValueType lookup(const LLNode<ValueType> * head,
				 std::size_t index)
{
	for(int i = 0; i < index && head != nullptr; i++)
	{
		head = head->_next;
	}
	if (head == nullptr)
	{
		throw std::out_of_range("Index is out of range!");
	}
	return head->_data;
}


// Implementation in source file
void didItThrow(const std::function<void()> & ff,
				bool & threw);

//Returns true if the given iterators' array is sorted
//Pre: first != last
template <typename FDIter>
bool checkSorted(FDIter first, FDIter last)
{
	if (first == last) {
		return true;  // An empty range is always considered sorted.
	}

	FDIter next = first;
	++next; // Advance to the next element.

	while (next != last) {
		if (*next < *first) {
			return false;  // Found an out-of-order element.
		}
		++first;
		++next;
	}
	return true;
}


// Implementation in source file
int gcd(int a, int b);


#endif  //#ifndef FILE_DA3_HPP_INCLUDED

