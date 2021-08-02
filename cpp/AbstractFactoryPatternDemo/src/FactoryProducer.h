/*
Filename: FactoryProducer.h
Author: Jainam
Created On: 01 Aug 2021
Modified On: 01 Aug 2021
*/

#include "AbstractFactory.h"

class FactoryProducer {
	public:
		AbstractFactory* getFactory(bool isRounded);
};
