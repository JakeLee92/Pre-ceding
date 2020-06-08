#include "NaviMemory.h"
#include <iostream>

CNaviMemory::CNaviMemory()
{
}

CNaviMemory::CNaviMemory(int _iMemory, int _iCpu)
{
}

void CNaviMemory::AddModuleMemory(CModuleMemory * _pModule)
{
	if (_pModule)
	{
		m_vtModuleMemory.push_back(_pModule);
	}
}

void CNaviMemory::ClearModule()
{
	for (int i = 0; i < m_vtModuleMemory.size(); i++)
	{
		if (m_vtModuleMemory[i])
		{
			delete m_vtModuleMemory[i];
			m_vtModuleMemory[i] = NULL;
		}
	}

	m_vtModuleMemory.clear();
}

int CNaviMemory::CheckMaxMemory()
{
	int iRet = 0;
	std::string modName;

	for (int i = 0; i < m_vtModuleMemory.size(); i++)
	{
		CModuleMemory* pModule = m_vtModuleMemory[i];

		if (pModule)
		{
			if (iRet < pModule->CheckMemory())
			{
				iRet = pModule->CheckMemory();
				modName = pModule->GetModuleName();
			}
		}
	}

	std::cout << " Max Mem : " <<modName << " -->" << iRet << std::endl;

	return iRet;
}


int CNaviMemory::CheckMemory()
{
	int iRet = 0;

	for (int i = 0; i < m_vtModuleMemory.size(); i++)
	{
		CModuleMemory* pModule = m_vtModuleMemory[i];

		if (pModule)
		{
			iRet += pModule->CheckMemory();
		}
	}

	std::cout << " Navi Mem : " << iRet << std::endl;

	return iRet;
}
