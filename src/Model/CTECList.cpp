/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: jker3169
 */

#include "CTECList.h"

template <class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template <class Type>
CTECList<Type>::~CTECList()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECList<Type>::getSize()
{

}

template <class Type>
void CTECList<Type>::addToFront(Type value)
{

}

template <class Type>
void CTECList<Type>::addToEnd(Type value)
{

}

template <class Type>
void CTECList<Type>::addAtIndex(int index, Type value)
{

}

template <class Type>
Type CTECList<Type>::getFront()
{

}

template <class Type>
Type CTECList<Type>::getEnd()
{

}

template <class Type>
Type CTECList<Type>::getFromIdex(int index)
{

}

template <class Type>
Type CTECList<Type>::removeFromFront()
{
	//Create a pointer to what is after head
	ArrayNode<Type> * newHead;
	newHead = head->getNext();

	//Delete what head is pointing to
	delete head;

	//Set head to the new head
	this->head = newHead;
}

template <class Type>
Type CTECList<Type>::removeFromEnd()
{
	//Loop over size
	//or
	//Loop until getNext()->getNext() == nullptr


}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{

}

template <class Type>
Type CTECList<Type>::set(int index, Type value)
{

}
