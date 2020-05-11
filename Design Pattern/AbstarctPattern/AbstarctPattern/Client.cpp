#include <iostream>
#include "CreatorAVNFactory.h"

int main()
{
	CCreatorAVNFactory creator;

	// LG
	CAVNFactory *pFactoryLG = creator.CreateFactory(LG);
	if (pFactoryLG)
	{
		CAudioModule *pAudio = pFactoryLG->MakeAudio();
		CVideoModule *pVideo = pFactoryLG->MakeVideo();

		if (pAudio)
			delete pAudio;

		if (pVideo)
			delete pVideo;
	}

	// Mobis
	CAVNFactory *pFactoryMobis = creator.CreateFactory(Mobis);
	if (pFactoryLG)
	{
		CAudioModule *pAudio = pFactoryMobis->MakeAudio();
		CVideoModule *pVideo = pFactoryMobis->MakeVideo();

		if (pAudio)
			delete pAudio;

		if (pVideo)
			delete pVideo;
	}


	return 0;
}