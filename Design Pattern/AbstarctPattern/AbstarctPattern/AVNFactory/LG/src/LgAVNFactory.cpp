#include "..\LgAVNFactory.h"
#include <iostream>

void CLgAVNFactory::MakeAVN()
{
	std::cout << "Start Making AVN [LG]" << std::endl;

	CLgAudioModule* pAudio = MakeAudio();
	CLgVideoModule* pVideo = MakeVideo();

	if (pAudio)
		delete pAudio;

	if (pVideo)
		delete pVideo;
}
CLgAudioModule* CLgAVNFactory::MakeAudio()
{

	CLgAudioModule* pModule = nullptr;

	std::cout << "Make Audio [LG]" << std::endl;

	pModule = new CLgAudioModule();
	pModule->PlayAudio();

	return pModule;
}

CLgVideoModule* CLgAVNFactory::MakeVideo()
{
	CLgVideoModule* pModule = nullptr;

	std::cout << "Make Video [LG]" << std::endl;

	pModule = new CLgVideoModule();
	pModule->PlayVideo();

	return new CLgVideoModule();
}

