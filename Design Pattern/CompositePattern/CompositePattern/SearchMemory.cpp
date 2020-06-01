#include "SearchMemory.h"

CSearchMemory::CSearchMemory()
{
	m_iMemory = 0;
	m_iCpu = 0;

	m_strModuleName = "Search";
}

CSearchMemory::CSearchMemory(int _iMemory, int _iCpu)
{
	m_iMemory = _iMemory;
	m_iCpu = _iCpu;

	m_strModuleName = "Search";
}

int CSearchMemory::CheckMemory()
{
	return m_iMemory;
}

int CSearchMemory::CheckCpu()
{
	return m_iCpu;
}
