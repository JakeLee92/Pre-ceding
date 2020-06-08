#ifndef __Audio_Factory_h__
#define __Audio_Factory_h__

#include "AudioModeMobis.h"
#include "AudioModuleLG.h"
class CAudioFactory
{
public :
	CModule* CreatoreAudioModule(Vendor _vendor);

};


#endif // !__Audio_Factory_h__
