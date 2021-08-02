/*
Filename: App.cpp
Author: Jainam
Created On: 01 Aug 2021
Last Modified: 01 Aug 2021
*/

#include <iostream>
#include <cstdlib>

#include "ShapeFactory.h"
#include "Shape.h"

#define SHAPE_SIZE 15

int main() {
	char shapeType[SHAPE_SIZE];
	std::cout<<"Enter Shape Type: ";
	std::cin.getline(shapeType, SHAPE_SIZE);
	ShapeFactory shapeFactory;
	Shape* shape = shapeFactory.getShape(shapeType);
	if(shape!=NULL) {
		shape->draw();
	} else {
		std::cout<<"Invalid Shape Type"<<std::endl;
	}
	return 0;
}

