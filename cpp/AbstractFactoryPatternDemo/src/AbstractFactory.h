/*
Filename: AbstractFactory.h
Author: Jainam
Created On: 01 Aug 2021
Modified On: 01 Aug 2021
*/

#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include "Shape.h"

class AbstractFactory {
	public:
		virtual Shape* getShape(const char* shapeType)=0;
};

#endif
