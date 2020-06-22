#ifndef __Navi_Module_h__
#define __Navi_Module_h__

#include "Module.h"
#include "MemoryMonitor/NaviMemory.h"
#include "CpuMonitor/NaviCpu.h"
#include "CDrawCache.h"



class CNaviModule : public CModule
{
public:
	CNaviModule();

	// Inherited via CModule
	virtual void Play() override;
	virtual void DrawBuilding(int _iSession);


	void AddModuleMemory(CModuleMemory* _pModule);
	void AddModuleCpu(CNaviCpu* _pModule);

	int CheckMaxMemory();
	int CheckMaxCpu();

private:
	
	CDrawCache m_BuildingChache;

	CNaviMemory m_NaviMem;
	CNaviCpu m_NaviCpu;
};



#endif // !__Navi_Module_LG_h__

