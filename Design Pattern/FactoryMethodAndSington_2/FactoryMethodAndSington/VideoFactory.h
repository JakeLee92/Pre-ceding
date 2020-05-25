#ifndef __Video_Factory_h__
#define __Video_Factory_h__

#include "VideoModuleLG.h"
#include "VideoModuleMobis.h"

class CVideoFactory
{
	
public:
	CModule* CreatoreAudioModule(Vendor _vendor);

};


#endif
