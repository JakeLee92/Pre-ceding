#include "CreatorAVNFactory.h"
#include "AVNFactory/LG/LgAVNFactory.h"
#include "AVNFactory/Mobis/MobisAVNFactory.h"

CCreatorAVNFactory::CCreatorAVNFactory()
{
}

CCreatorAVNFactory::~CCreatorAVNFactory()
{
}

CAVNFactory * CCreatorAVNFactory::CreateFactory(VendorType _Type)
{
	if (_Type == LG)
	{
		return new CLgAVNFactory();
	}
	else if(_Type == Mobis)
	{
		return new CMobisAVNFactory();
	}
	else
	{
		nullptr;
	}

	return nullptr;
}
