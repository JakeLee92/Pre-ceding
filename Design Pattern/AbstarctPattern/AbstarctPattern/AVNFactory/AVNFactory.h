#ifndef __AVN_FACTORY_H__
#define __AVN_FACTORY_H__

#include "../AVN/Audio/AudioModule.h"
#include "../AVN/Video/VideoModule.h"

class CAVNFactory
{
public :
	CAVNFactory();
	virtual ~CAVNFactory();

	virtual void MakeAVN() = 0;

	virtual CAudioModule* MakeAudio() = 0;
	virtual CVideoModule* MakeVideo() = 0;

};

#endif