#ifndef __Navi_Module_Mobis_h__
#define __Navi_Module_Mobis_h__

#include "NaviModule.h"

class CNaviModuleMobis : public CNaviModule
{
public:
	CNaviModuleMobis();

	void PlayNaviMobis();

	// Inherited via CModule
	virtual void Play() override;
};


#endif // !__Navi_Module_LG_h__

