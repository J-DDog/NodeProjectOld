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
//	this->intNode.setValue(5);
//	this->stringArrayNode.setValue("words are fun");
//	this->otherArrayNode.setValue("linked node");
//	this->stringArrayNode.setNext(&otherArrayNode);
	myStringArray = new CTECArray<string>(5);
}

NodeController::		~NodeController()
{

}

void NodeController::	start()
{
	string first = "first";
	string secound = "not secound";
	string third = "trois";
	string forth = "yon";
	string fifth = "cing";

	myStringArray->set(0, first);
	myStringArray->set(1, secound);
	myStringArray->set(2, third);
	myStringArray->set(3, forth);
	myStringArray->set(4, fifth);

	for(int index = 0; index < myStringArray->Length(); index++)
	{
		cout << "The contents at " << index << " are: " << myStringArray->get(index) << endl;
	}
}
