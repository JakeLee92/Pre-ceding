#ifndef __LG_AUDIO_MODULUE_H__
#define __LG_AUDIO_MODULUE_H__

#include "../AudioModule.h"

class CLgAudioModule : public CAudioModule
{
public:

	// Inherited via CAudioModule
	virtual void PlayAudio() override;

};

#endif