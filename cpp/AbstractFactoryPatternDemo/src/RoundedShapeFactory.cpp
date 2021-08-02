/*
Filename: RoundedShapeFactory.cpp
Author: Jainam
Created On: 01 Aug 2021
Modified On: 01 Aug 2021
*/

#include <cstring>
#include "RoundedShapeFactory.h"
#include "Shape.h"
#include "RoundedRectangle.h"
#include "RoundedSquare.h"

Shape* RoundedShapeFactory::getShape(const char* shapeType) {
	Shape* shape = NULL;
	if(shapeType!=NULL) {
		if(strcasecmp(shapeType, "RECTANGLE")==0) {
			shape = new RoundedRectangle();
		} else if(strcasecmp(shapeType, "SQUARE")==0) {
			shape = new RoundedSquare();
		}
	}
	return shape;
}
