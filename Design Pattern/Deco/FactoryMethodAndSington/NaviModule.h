#ifndef __Navi_Module_h__
#define __Navi_Module_h__

#include "Module.h"
#include "MemoryMonitor/NaviMemory.h"
#include "CpuMonitor/NaviCpu.h"



class CNaviModule : public CModule
{
public:
	CNaviModule();

	// Inherited via CModule
	virtual void Play() override;

	void AddModuleMemory(CModuleMemory* _pModule);
	void AddModuleCpu(CNaviCpu* _pModule);

	int CheckMaxMemory();
	int CheckMaxCpu();

private:
	CNaviMemory m_NaviMem;
	CNaviCpu m_NaviCpu;
};



#endif // !__Navi_Module_LG_h__

