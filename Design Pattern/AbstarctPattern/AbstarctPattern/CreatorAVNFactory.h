#include "AVNFactory/AVNFactory.h"

enum VendorType
{
	Mobis,
	LG,
	Max
};

class CCreatorAVNFactory
{

public :
	CCreatorAVNFactory();
	virtual ~CCreatorAVNFactory();

	CAVNFactory* CreateFactory(VendorType _Type);
	
};