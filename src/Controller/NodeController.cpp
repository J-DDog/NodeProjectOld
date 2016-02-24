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
	this->notHipsterInts = new CTECArray<int>(5);
	this->coolStrings = new CTECList<string>(5);
}

NodeController::		~NodeController()
{

}

void NodeController::	start()
{
	arrayTimer.startTimer();

	cout << notHipsterInts->Length() << endl;
	for(int index = 0; index < notHipsterInts->Length(); index++)
	{
		notHipsterInts->set(index, (23 * index));
		cout << index << endl;
	}


	for(int index = 0; index < notHipsterInts->Length(); index++)
	{
		cout << notHipsterInts->get(index) << endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}
