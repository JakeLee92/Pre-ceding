#ifndef __MOBIS_VIDEO_MODULE_H__
#define __MOBIS_VIDEO_MODULE_H__


#include "../VideoModule.h"

class CMobisVideoModule : public CVideoModule
{
public:
	// Inherited via CAudioModule
	virtual void PlayVideo() override;

};

#endif