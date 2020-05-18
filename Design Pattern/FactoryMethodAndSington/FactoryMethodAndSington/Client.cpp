#include <iostream>
#include "Store/Store.h"


int main()
{
	// CREATE SINGLETON 
	CStore *pStore = CStore::GetInstacne();


	// FACTORY METHOD
	if (pStore)
	{
		// CREATE MODULE
		CModule *modAudioMobis = pStore->BuyAudio(eMobis);
		CModule *modAudioLG = pStore->BuyAudio(eLG);

		CModule *modVideoMobis = pStore->BuyVideo(eMobis);
		CModule *modVideoLG = pStore->BuyVideo(eLG);

		// PLAY MODULE
		modAudioMobis->Play();
		modAudioLG->Play();

		modVideoMobis->Play();
		modVideoLG->Play();


		// DELETE MEMORY
		if (modAudioMobis)
			delete modAudioMobis;
		if (modAudioLG)
			delete modAudioLG;

		if (modVideoMobis)
			delete modVideoMobis;
		if (modVideoLG)
			delete modVideoLG;

	}

	// DESTORY SINGLETON
	CStore::DestroyInstance();

	return 0;
}