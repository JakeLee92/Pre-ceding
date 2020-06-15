#include <iostream>
#include "StoreAdapter.h"
#include "AVNServiceFacade.h"

int main()
{
	// CREATE SINGLETON 
	StoreAdapter Store;
	CAVNServiceFacade facade;

	facade.SetAudioModuleM(new CAudioModuleMobis());
	facade.SetNaviModuleL(new CNaviModuleLG());

	facade.PlayAudioLG();
	facade.PlayAudioMobis();

	facade.PlayNaviLG();



	//// DELETE MEMORY
	//if (modAudioMobis1)
	//	delete modAudioMobis1;
	//if (modAudioLG1)
	//	delete modAudioLG1;

	//if (modVideoMobis1)
	//	delete modVideoMobis1;
	//if (modVideoLG1)
	//	delete modVideoLG1;

	//if (modAudioMobis2)
	//	delete modAudioMobis2;
	//if (modAudioLG2)
	//	delete modAudioLG2;

	//if (modVideoMobis2)
	//	delete modVideoMobis2;
	//if (modVideoLG2)
	//	delete modVideoLG2;



	return 0;
}