#include "MapDisplayCpu.h"

CMapDisplayCpu::CMapDisplayCpu()
{
	m_iMemory = 0;
	m_iCpu = 0;

	m_strModuleName = "MapDisplay";
}

CMapDisplayCpu::CMapDisplayCpu(int _iMemory, int _iCpu)
{
	m_iMemory = _iMemory;
	m_iCpu = _iCpu;

	m_strModuleName = "MapDisplay";
}


