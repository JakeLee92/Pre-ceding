#include <iostream>
#include "StoreAdapter.h"
#include "AVNServiceFacade.h"
#include "ISModule.h"
#include "RPModule.h"
#include "NaviInitMediator.h"
#include "../../Observer_Pattern/Observer_Pattern/Observer/NaviObserver/RPRunningObserver.h"
#include "../../Observer_Pattern/Observer_Pattern/Subject/NaviSubject/RPSubject.hpp"
#include "../../Observer_Pattern/Observer_Pattern/Subject/NaviSubject/ISSubject.hpp"
#include "../../Observer_Pattern/Observer_Pattern/Subject/NaviSubject/MDSubject.hpp"

int main()

{
	/*CNaviInitMediator* medi = new CNaviInitMediator();

	CISModule* pIS = new CISModule();
	CRPModule* pRP = new CRPModule();

	pIS->SetMediator(medi);
	pRP->SetMediator(medi);

	medi->m_vtModuleItem.push_back(pIS);
	medi->m_vtModuleItem.push_back(pRP);

	medi->StartInitialize();*/

	CRPRunningObserver *pOp = new CRPRunningObserver();

	CRPSubject *pRP = new CRPSubject();
	CISSubject *pIS = new CISSubject();
	CMDSubject *pMD = new CMDSubject();

	pRP->RegistObserver(pOp);

	pOp->RegistSubject(pIS);
	pOp->RegistSubject(pMD);

	pRP->Notify();

	return 0;
}