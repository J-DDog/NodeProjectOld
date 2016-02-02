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
}

// Destructor
template <class Type>
CTECArray<Type>::	~CTECArray()
{
	// TODO Auto-generated destructor stub
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
