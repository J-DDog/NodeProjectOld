/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: jker3169
 */

#include "CTECArray.h"
using namespace std;

// Constructor
template <class Type>
CTECArray<Type>::	CTECArray(int length)
{
	this->length = length;

	if(length <= 0)
	{
		cerr << "Imposible!!!" << endl;
	}
	else
	{
		head = nullptr;
		for(int spot = 0; spot < length; spot++)
		{

			if(head != nullptr) // make the next one
			{
				 ArrayNode<Type> nextNode;
				 nextNode.setNext(head);
				 head = &nextNode;
			}
			else
			{
				ArrayNode<Type> first;
				head = &first;
			}

		}

	}

}

// Destructor
template <class Type>
CTECArray<Type>::	~CTECArray()
{
	ArrayNode<Type> * deleteNode;
	for(int spot = this->length; spot < 0; spot--)
	{
		if(deleteNode->getNext() != nullptr)
		{
			head = deleteNode->getNext();
			deleteNode->setNext(nullptr);
		}
		delete deleteNode->getNext();
		deleteNode = head;

	}
	delete head;
}

template <class Type>
int CTECArray<Type>:: Length()
{
	return this->length;

}

template <class Type>
Type * CTECArray<Type>::	get(int position)
{
	if(position >= length || position < 0) //Bounds Check for Length and negative
	{
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++) //Inclusive (inbounds)
		{

			if(spot != position) //Check if we have the desired position
			{
				current = current->next; //Moving to next position
			}
			else
			{
				return current->getValue; //Returning the current value because it has the position we want
			}
		}
	}
}

template <class Type>
void CTECArray<Type>::	set(int position, Type value)
{
	if(position >= length || position < 0) //Bounds Check for Length and negative
	{
		cerr << "Dont't do this!" << endl;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++) //Inclusive (inbounds)
		{

			if(spot != position) //Check if we have the desired position
			{
				current = current->next; //Moving to next position
			}
			else
			{
				current->setValue(value); //Returning the current value because it has the position we want
			}
		}
	}
}
