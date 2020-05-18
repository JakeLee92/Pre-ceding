#include "AudioFactory.h"

CModule * CAudioFactory::CreatoreAudioModule(Vendor _vendor)
{
	CModule *module = nullptr;

	switch (_vendor)
	{
	case eMobis:
		module = new CAudioModuleMobis;
		break;

	case eLG:
		module = new CAudioModuleLG;
		break;

	default:
		break;
	}

	return module;
}
