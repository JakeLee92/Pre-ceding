#ifndef __MOBIS_AVN_FACTORY_H__
#define __MOBIS_AVN_FACTORY_H__

#include "../AVNFactory.h"
#include "../../AVN/Audio/Mobis/MobisAudioModule.h"
#include "../../AVN/Video/Mobis/MobisVideoModule.h"

class CMobisAVNFactory : public CAVNFactory
{
	// Inherited via CAVNFactory
	virtual void MakeAVN() override;
		
	virtual CMobisAudioModule* MakeAudio() ;
	virtual CMobisVideoModule* MakeVideo() ;
	
};

#endif