#ifndef __MOBIS_AUDIO_MODULE_H__
#define __MOBIS_AUDIO_MODULE_H__

#include "../AudioModule.h"

class CMobisAudioModule : public CAudioModule
{
public :
	// Inherited via CAudioModule
	virtual void PlayAudio() override;
	
};

#endif