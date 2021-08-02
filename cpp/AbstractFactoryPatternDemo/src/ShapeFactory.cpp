/*
Filename: ShapeFactory.cpp
Author: Jainam
Created On: 01 Aug 2021
Modified On: 01 Aug 2021
*/

#include <cstring>
#include "ShapeFactory.h"
#include "Rectangle.h"
#include "Square.h"

Shape* ShapeFactory::getShape(const char* shapeType) {
	Shape* shape = NULL;
	if(shapeType!=NULL) {
		if(strcasecmp(shapeType, "RECTANGLE")==0) {
			shape = new Rectangle();
		} else if(strcasecmp(shapeType, "SQUARE")==0) {
			shape = new Square();
		}
	}
	return shape;
}
