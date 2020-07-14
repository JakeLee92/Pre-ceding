#include "NaviInitMediator.h"
#include "ModuleItem.h"

CNaviInitMediator::CNaviInitMediator()
{

}

CNaviInitMediator::~CNaviInitMediator()
{
	
}

bool CNaviInitMediator::StartInitialize()
{

	for (int i = 0; i < m_vtModuleItem.size(); i++)
	{
		CModuleItem* pModule = m_vtModuleItem[i];
		if (pModule)
			pModule->InitModuleItem();
	}

	return true;
}

