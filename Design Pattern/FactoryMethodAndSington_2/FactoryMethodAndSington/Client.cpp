#include <iostream>
#include "StoreAdapter.h"

int main()
{
	// CREATE SINGLETON 
	StoreAdapter Store;


	// CREATE MODULE
	CModule *modAudioMobis1 = Store.BuyAudio(eMobis, eDoller);
	CModule *modAudioMobis2 = Store.BuyAudio(eMobis, eWon);
	CModule *modAudioLG1 = Store.BuyAudio(eLG, eDoller);
	CModule *modAudioLG2 = Store.BuyAudio(eLG, eEuro);

	CModule *modVideoMobis1 = Store.BuyVideo(eMobis, eDoller);
	CModule *modVideoLG1 = Store.BuyVideo(eLG, eDoller);
	CModule *modVideoMobis2 = Store.BuyVideo(eMobis, eEuro);
	CModule *modVideoLG2 = Store.BuyVideo(eLG, eWon);

	//// PLAY MODULE
	//modAudioMobis->Play();
	//modAudioLG->Play();

	//modVideoMobis->Play();
	//modVideoLG->Play();


	// DELETE MEMORY
	if (modAudioMobis1)
		delete modAudioMobis1;
	if (modAudioLG1)
		delete modAudioLG1;

	if (modVideoMobis1)
		delete modVideoMobis1;
	if (modVideoLG1)
		delete modVideoLG1;

	if (modAudioMobis2)
		delete modAudioMobis2;
	if (modAudioLG2)
		delete modAudioLG2;

	if (modVideoMobis2)
		delete modVideoMobis2;
	if (modVideoLG2)
		delete modVideoLG2;



	return 0;
}