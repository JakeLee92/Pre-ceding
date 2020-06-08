#include "NaviCpu.h"
#include <iostream>

CNaviCpu::CNaviCpu() : m_pNaviCpu(NULL)
{
}

CNaviCpu::CNaviCpu(int _iMemory, int _iCpu) : m_pNaviCpu(NULL)
{
	
}

CNaviCpu * CNaviCpu::GetNextNode()
{
	return m_pNaviCpu;
}

void CNaviCpu::AddModuleCpu(CNaviCpu * _pModule)
{
	if (m_pNaviCpu)
	{
		m_pNaviCpu->AddModuleCpu(_pModule);
	}
	else
	{
		m_pNaviCpu = _pModule;
	}
}

void CNaviCpu::ClearModule()
{
	CNaviCpu* pCpu = GetNextNode();

	if (pCpu != NULL)
	{
		pCpu->ClearModule();
	}
	else
	{
		delete pCpu;
		pCpu = NULL;
	}

}

int CNaviCpu::CheckMaxCpu()
{
	CNaviCpu* pCpu = GetNextNode();
	int iRet = 0;

	if (pCpu == NULL)
	{
		return 0;
	}
	else
	{
		iRet = m_iCpu + CheckMaxCpu();
	}
	
	return iRet;
}

int CNaviCpu::CheckCpu()
{
	return m_iCpu;
}

