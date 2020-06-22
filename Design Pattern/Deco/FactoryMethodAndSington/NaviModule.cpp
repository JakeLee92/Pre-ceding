#include "NaviModule.h"
#include <iostream>

CNaviModule::CNaviModule()
{

}

void CNaviModule::Play()
{
}

void CNaviModule::DrawBuilding(int _iSession)
{
	stBuilding builing = m_BuildingChache.FindInCahce(_iSession);

	if (builing.m_iSessionNum == 0)
	{
		// 구현하기 나름
		stBuilding insertBuiling;

		insertBuiling.m_iBuildingType = 4;
		insertBuiling.m_iSessionNum = _iSession;
		// insertBuiling.m_arrVertex = /* vertex정보 */

		m_BuildingChache.InsertToCache(insertBuiling);

		std::cout << "DRAW BUILDING "<< _iSession << std::endl;
	}
	else
	{
		std::cout << "[Cache] DRAW BUILDING " << _iSession << std::endl;
	}

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
