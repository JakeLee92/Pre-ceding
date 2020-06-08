#include "MapDisplayMemory.h"

CMapDisplayMemory::CMapDisplayMemory()
{
	m_iMemory = 0;
	m_iCpu = 0;

	m_strModuleName = "MapDisplay";
}

CMapDisplayMemory::CMapDisplayMemory(int _iMemory, int _iCpu)
{
	m_iMemory = _iMemory;
	m_iCpu = _iCpu;

	m_strModuleName = "MapDisplay";
}

int CMapDisplayMemory::CheckMemory()
{
	return m_iMemory;
}

