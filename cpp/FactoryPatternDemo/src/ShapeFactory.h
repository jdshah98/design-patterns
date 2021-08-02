/*
Filename: ShapeFactory.h
Author: Jainam
Created On: 01 Aug 2021
Last Modified: 01 Aug 2021
*/

//#ifndef SHAPEFACTORY_H
//#define SHAPEFACTORY_H
#include "Shape.h"

class ShapeFactory {
	public:
		Shape* getShape(const char* shapeType);
};

//#endif
