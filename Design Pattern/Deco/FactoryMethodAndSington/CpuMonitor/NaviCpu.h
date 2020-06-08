#ifndef __NAVICPU_H__
#define __NAVICPU_H__

#include "ModuleCpu.h"
#include <vector>

class CNaviCpu : public CModuleCpu
{
private:
	CNaviCpu* m_pNaviCpu;

public:

	CNaviCpu();
	CNaviCpu(int _iMemory, int _iCpu);

	CNaviCpu* GetNextNode();

	void AddModuleCpu(CNaviCpu* _pModule);
	void ClearModule();

	int CheckMaxCpu();

	// Inherited via CModuleMemory
	virtual int CheckCpu() override;

};

#endif