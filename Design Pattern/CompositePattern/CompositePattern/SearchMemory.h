#ifndef __SEARCHMEMORY_H__
#define __SEARCHMEMORY_H__

#include "ModuleMemory.h"

class CSearchMemory : public CModuleMemory
{
public :

	CSearchMemory();
	CSearchMemory(int _iMemory , int _iCpu);

	// Inherited via CModuleMemory
	virtual int CheckMemory() override;
	virtual int CheckCpu() override;
};


#endif