#ifndef __NAVIMEMORY_H__
#define __NAVIMEMORY_H__

#include "ModuleMemory.h"
#include <vector>

class CNaviMemory : public CModuleMemory
{
private:
	std::vector<CModuleMemory*> m_vtModuleMemory;

public:

	CNaviMemory();
	CNaviMemory(int _iMemory, int _iCpu);

	void AddModuleMemory(CModuleMemory* _pModule);
	void ClearModule();

	int CheckMaxMemory();
	int CheckMaxCpu();

	// Inherited via CModuleMemory
	virtual int CheckMemory() override;
	virtual int CheckCpu() override;
};

#endif