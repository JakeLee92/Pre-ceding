#include "RoutePlanningMemory.h"

CRoutePlanningMemory::CRoutePlanningMemory()
{
	m_iMemory = 0;
	m_iCpu = 0;

	m_strModuleName = "RoutePlanning";
}

CRoutePlanningMemory::CRoutePlanningMemory(int _iMemory, int _iCpu)
{
	m_iMemory = _iMemory;
	m_iCpu = _iCpu;

	m_strModuleName = "RoutePlanning";
}

int CRoutePlanningMemory::CheckMemory()
{
	return m_iMemory;
}

