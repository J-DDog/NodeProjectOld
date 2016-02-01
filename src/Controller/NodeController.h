/*
 * NodeController.h
 *
 *  Created on: Jan 29, 2016
 *      Author: jker3169
 */

#ifndef COM_CTEC_CONTROLLER_NODECONTROLLER_H_
#define COM_CTEC_CONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include <string>
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"

using namespace std;

class NodeController
{
public:
	NodeController();
	virtual ~NodeController();
	void start();
private:
	Node<int> intNode;
	ArrayNode<string> stringArrayNode;
	ArrayNode<string> otherArrayNode;
};

#endif /* COM_CTEC_CONTROLLER_NODECONTROLLER_H_ */
