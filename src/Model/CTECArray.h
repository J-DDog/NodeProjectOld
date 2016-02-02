/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: jker3169
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

#include "ArrayNode.h"

template <class Type>
class CTECArray {
public:
	CTECArray(int length);
	virtual ~CTECArray();
	int Length();
	Type * get(int position);
	void set(int position, Type value);
private:
	int length;
	ArrayNode<Type> * head;
};

#endif /* MODEL_CTECARRAY_H_ */
