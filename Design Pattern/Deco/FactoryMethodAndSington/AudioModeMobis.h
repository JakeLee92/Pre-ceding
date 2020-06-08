#ifndef __Audio_Module_Mobis_h__
#define __Audio_Module_Mobis_h__

#include "Module.h"

class CAudioModuleMobis : public CModule
{
public:
	CAudioModuleMobis();

	// Inherited via CModule
	virtual void Play() override;
};


#endif // !__Audio_Module_Mobis_h__

