#ifndef __Navi_Factory_h__
#define __Navi_Factory_h__

#include "NaviModuleLG.h"
#include "NaviModuleMobis.h"

class CNaviFactory
{
public:
	CModule* CreatoreNaviModule(Vendor _vendor);

};


#endif // !__Navi_Factory_h__
