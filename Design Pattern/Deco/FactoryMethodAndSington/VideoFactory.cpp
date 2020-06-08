#include "VideoFactory.h"

CModule * CVideoFactory::CreatoreAudioModule(Vendor _vendor)
{
	CModule *module = nullptr;

	switch (_vendor)
	{
	case eMobis:
		module = new CVideoModuleMobis;
		break;

	case eLG:
		module = new CVideoModuleLG;
		break;

	default:
		break;
	}

	return module;
}
