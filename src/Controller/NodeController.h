/*
 * NodeController.h
 *
 *  Created on: Jan 29, 2016
 *      Author: jker3169
 */

#ifndef COM_CTEC_CONTROLLER_NODECONTROLLER_H_
#define COM_CTEC_CONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include "../Model/Node.h"

class NodeController
{
public:
	NodeController();
	virtual ~NodeController();
private:
	Node<int> intNode;
};

#endif /* COM_CTEC_CONTROLLER_NODECONTROLLER_H_ */
