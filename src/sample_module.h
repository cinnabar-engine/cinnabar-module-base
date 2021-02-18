#ifndef _SAMPLE_MODULE_H_
#define _SAMPLE_MODULE_H_

#include <module.h>

class SampleModule:public ce::Module {
private:
public:
	SampleModule();
	~SampleModule();
	
	void tick(float deltaTime);
};

#endif // _SAMPLE_MODULE_H_

CE_MODULE(SampleModule)
