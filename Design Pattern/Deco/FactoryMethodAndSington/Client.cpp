#include <iostream>
#include "StoreAdapter.h"
#include "AVNServiceFacade.h"
#include "ISModule.h"
#include "RPModule.h"
#include "NaviInitMediator.h"

int main()

{
	CNaviInitMediator* medi = new CNaviInitMediator();
	
	CISModule* pIS = new CISModule();
	CRPModule* pRP = new CRPModule();

	pIS->SetMediator(medi);
	pRP->SetMediator(medi);

	medi->m_vtModuleItem.push_back(pIS);
	medi->m_vtModuleItem.push_back(pRP);
	
	medi->StartInitialize();

	return 0;
}