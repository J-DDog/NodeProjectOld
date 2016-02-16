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
#include "../Model/CTECArray.h"
#include "../Model/CTECArray.cpp"
#include "../Model/Timer.h"

using namespace std;

class NodeController
{
public:
	NodeController();
	virtual ~NodeController();
	void start();
private:
	CTECArray<int> * notHipsterInts;
	Timer arrayTimer;
};

#endif /* COM_CTEC_CONTROLLER_NODECONTROLLER_H_ */
