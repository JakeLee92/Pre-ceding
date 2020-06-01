#ifndef __MAPMEMORY_H__
#define __MAPMEMORY_H__

#include "ModuleMemory.h"

class CMapDisplayMemory : public CModuleMemory
{
public :

	CMapDisplayMemory();
	CMapDisplayMemory(int _iMemory , int _iCpu);

	// Inherited via CModuleMemory
	virtual int CheckMemory() override;
	virtual int CheckCpu() override;
};


#endif