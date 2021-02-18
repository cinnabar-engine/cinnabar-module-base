#include "sample_module.h"
#include <iostream>

SampleModule::SampleModule(void* lib)
:ce::Module(lib)
{
	std::cout << "Hello From Sample Module!\n";
}
SampleModule::~SampleModule()
{
}

void SampleModule::tick(float deltaTime)
{
}
