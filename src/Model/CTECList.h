/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: jker3169
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include <iostream>
#include "ArrayNode.h"

template <class Type>
class CTECList
{
public:
	CTECList();
	virtual ~CTECList();
	int getSize();
	void addToFront(Type value);
	void addToEnd(Type value);
	void addAtIndex(int index, Type value);
	Type getFront();
	Type getEnd();
	Type getFromIdex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index, Type value);
private:
	int size;
	ArrayNode<Type>* head;
	ArrayNode<Type>* end;
};
#endif /* MODEL_CTECLIST_H_ */

