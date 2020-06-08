#include "SearchCpu.h"

CSearchCpu::CSearchCpu()
{
	m_iMemory = 0;
	m_iCpu = 0;

	m_strModuleName = "Search";
}

CSearchCpu::CSearchCpu(int _iMemory, int _iCpu)
{
	m_iMemory = _iMemory;
	m_iCpu = _iCpu;

	m_strModuleName = "Search";
}

