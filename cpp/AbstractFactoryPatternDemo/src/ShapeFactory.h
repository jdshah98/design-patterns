/*
Filename: ShapeFactory.h
Author: Jainam
Created On: 01 Aug 2021
Modified On: 01 Aug 2021
*/

#include "AbstractFactory.h"
#include "Shape.h"

class ShapeFactory:public AbstractFactory {
	public:
		Shape* getShape(const char* shapeType);
};
