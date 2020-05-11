#include "..\MobisAVNFactory.h"
#include <iostream>

void CMobisAVNFactory::MakeAVN()
{
	std::cout << "Start Making AVN [MOBIS]" << std::endl;

	CMobisAudioModule* pAudio = MakeAudio();
	CMobisVideoModule* pVideo = MakeVideo();

	if (pAudio)
		delete pAudio;

	if (pVideo)
		delete pVideo;
}

CMobisAudioModule* CMobisAVNFactory::MakeAudio()
{

	CMobisAudioModule* pModule = nullptr;

	std::cout << "Make Audio [MOBIS]" << std::endl;

	pModule = new CMobisAudioModule();
	pModule->PlayAudio();

	return pModule;
}

CMobisVideoModule * CMobisAVNFactory::MakeVideo()
{

	CMobisVideoModule* pModule = nullptr;

	std::cout << "Make Video [MOBIS]" << std::endl;

	pModule = new CMobisVideoModule();
	pModule->PlayVideo();

	return pModule;
}


