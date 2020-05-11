#ifndef __LG_AVN_FACTORY_H__
#define __LG_AVN_FACTORY_H__

#include "../AVNFactory.h"
#include "../../AVN/Audio/LG/LgAudioModule.h"
#include "../../AVN/Video/LG/LgVideoModule.h"

class CLgAVNFactory : public CAVNFactory
{
	// Inherited via CAVNFactory
	virtual void MakeAVN() override;

	virtual CLgAudioModule* MakeAudio();
	virtual CLgVideoModule* MakeVideo();

};

#endif