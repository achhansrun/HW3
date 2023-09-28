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
#include <stdexcept>


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


template <typename FDIter>
bool checkSorted(FDIter first,
				 FDIter last)
{
	
}


// Implementation in source file
int gcd(int a,
		int b);


#endif  //#ifndef FILE_DA3_HPP_INCLUDED

