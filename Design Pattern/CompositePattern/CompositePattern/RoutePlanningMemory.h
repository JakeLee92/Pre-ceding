#ifndef __ROUTEMEMORY_H__
#define __ROUTEMEMORY_H__

#include "ModuleMemory.h"

class CRoutePlanningMemory : public CModuleMemory
{
public :

	CRoutePlanningMemory();
	CRoutePlanningMemory(int _iMemory , int _iCpu);

	// Inherited via CModuleMemory
	virtual int CheckMemory() override;
	virtual int CheckCpu() override;
};


#endif