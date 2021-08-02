/*
Filename: App.cpp
Author: Jainam
Created On: 01 Aug 2021
Modified On: 01 Aug 2021
*/

#include <iostream>
#include "FactoryProducer.h"
#include "AbstractFactory.h"
#include "Shape.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	FactoryProducer fp;
	bool isRounded = false;
	AbstractFactory *factory = fp.getFactory(isRounded);
	if(factory!=NULL) {
		char shapeType[15];
		std::cout<<"Enter Shape: ";
		std::cin.getline(shapeType, 15);
		Shape* shape = factory->getShape(shapeType);
		if(shape!=NULL) {
			shape->draw();
		} else {
			std::cout<<"Invalid Shape Type"<<std::endl;
		}
	} else {
		std::cout<<"factory not available"<<std::endl;
	}
	return 0;
}

