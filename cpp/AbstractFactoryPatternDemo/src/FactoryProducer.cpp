/*
Filename: FactoryProducer.cpp
Author: Jainam
Created On: 01 Aug 2021
Modified On: 01 Aug 2021
*/

#include <iostream>
#include "FactoryProducer.h"
#include "AbstractFactory.h"
#include "ShapeFactory.h"
#include "RoundedShapeFactory.h"

AbstractFactory* FactoryProducer::getFactory(bool isRounded) {
	AbstractFactory* factory = NULL;
	if(isRounded) {
		factory = new ShapeFactory();
	} else {
		factory = new RoundedShapeFactory();
	}
	return factory;
}
