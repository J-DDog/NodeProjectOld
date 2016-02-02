/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: jker3169
 */

#ifndef MODEL_ARRAYNODE_H_
#define MODEL_ARRAYNODE_H_

#include "Node.h"

template <class Type>
class ArrayNode: public Node<Type>
{
public:
	ArrayNode();
	ArrayNode(Type value);
	ArrayNode(Type value, ArrayNode<Type> * next);
	virtual ~ArrayNode();
	ArrayNode<Type> * getNext();
	void setNext(ArrayNode<Type> * next);
private:
	ArrayNode<Type> * next;
};

#endif /* MODEL_ARRAYNODE_H_ */
