#include "RoutePlanningCpu.h"

CRoutePlanningCpu::CRoutePlanningCpu()
{
	m_iMemory = 0;
	m_iCpu = 0;

	m_strModuleName = "RoutePlanning";
}

CRoutePlanningCpu::CRoutePlanningCpu(int _iMemory, int _iCpu)
{
	m_iMemory = _iMemory;
	m_iCpu = _iCpu;

	m_strModuleName = "RoutePlanning";
}


