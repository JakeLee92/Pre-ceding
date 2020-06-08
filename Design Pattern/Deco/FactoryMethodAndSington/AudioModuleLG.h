#ifndef __Audio_Module_LG_h__
#define __Audio_Module_LG_h__

#include "Module.h"

class CAudioModuleLG : public CModule
{
public :
	CAudioModuleLG();

	// Inherited via CModule
	virtual void Play() override;
};


#endif // !__Audio_Module_LG_h__

