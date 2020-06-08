#include "NaviModule.h"

CNaviModule::CNaviModule()
{

}

void CNaviModule::Play()
{
}

void CNaviModule::AddModuleMemory(CModuleMemory * _pModule )
{
	m_NaviMem.AddModuleMemory(_pModule);
}

void CNaviModule::AddModuleCpu(CNaviCpu * _pModule)
{
	m_NaviCpu.AddModuleCpu(_pModule);
}

int CNaviModule::CheckMaxMemory()
{
	return m_NaviMem.CheckMaxMemory();
}

int CNaviModule::CheckMaxCpu()
{
	return 0;
}
