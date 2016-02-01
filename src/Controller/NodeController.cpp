/*
 * NodeController.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: jker3169
 */

#include <iostream>
#include "NodeController.h"

NodeController::		NodeController()
{
	this->intNode.setValue(5);
	this->stringArrayNode.setValue("words are fun");
	this->otherArrayNode.setValue("linked node");
	stringArrayNode
}

NodeController::		~NodeController()
{

}

void NodeController::	start()
{
	cout << intNode.getValue() << endl;
	cout << stringArrayNode.getValue() << endl;
}
