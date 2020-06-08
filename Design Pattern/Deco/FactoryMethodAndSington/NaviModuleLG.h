#ifndef __Navi_Module_LG_h__
#define __Navi_Module_LG_h__

#include "NaviModule.h"

class CNaviModuleLG : public CNaviModule
{
public:
	CNaviModuleLG();

	// Inherited via CModule
	virtual void Play() override;
};


#endif // !__Navi_Module_LG_h__

