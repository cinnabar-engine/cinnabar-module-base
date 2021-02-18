#include "sample_module.h"
#include <iostream>

SampleModule::SampleModule()
{
	std::cout << "Hello From Sample Module!\n";
}
SampleModule::~SampleModule()
{
}

void SampleModule::tick(float deltaTime)
{
}
