#include "NaviFactory.h"


CModule * CNaviFactory::CreatoreNaviModule(Vendor _vendor)
{
	CModule *module = nullptr;

	switch (_vendor)
	{
	case eMobis:
		module = new CNaviModuleMobis;
		break;

	case eLG:
		module = new CNaviModuleLG;
		break;

	default:
		break;
	}

	return module;
}
