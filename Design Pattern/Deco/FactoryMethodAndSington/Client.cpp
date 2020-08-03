#include <iostream>

#include "AVNServiceFacade.h"
#include "ISModule.h"
#include "RPModule.h"
#include "NaviInitMediator.h"
#include "../../Observer_Pattern/Observer_Pattern/Observer/NaviObserver/RPRunningObserver.h"
#include "../../Observer_Pattern/Observer_Pattern/Subject/NaviSubject/RPSubject.hpp"
#include "../../Observer_Pattern/Observer_Pattern/Subject/NaviSubject/ISSubject.hpp"
#include "../../Observer_Pattern/Observer_Pattern/Subject/NaviSubject/MDSubject.hpp"

#include "NaviStateManager/NaviStateManager.h"
#include "NaviStateManager/State/TurnOnNaviState.h"
#include "NaviStateManager/State/TurnOffNaviState.h"
#include "NaviStateManager/State/RpRunningNaviState.h"

int main()
{
	CNaviOperator *pOperator = CNaviOperator::GetInstance();

	CTurnOnNaviState* pTurnOnState = new CTurnOnNaviState();
	CTurnOffNaviState* pTurnOffState = new CTurnOffNaviState();
	CRPRunningNaviState* pRpRunningState = new CRPRunningNaviState();

	if (pOperator)
	{
		// OFF 일때
		std::cout << std::endl << "---------------- OFF ------------------ " << std::endl;
		pOperator->SetState(pTurnOffState);
		pOperator->OnAction(eRPRunning);
		pOperator->OnAction(eTurnOff);
		pOperator->OnAction(eTurnOn);


		// ON 일때
		std::cout << std::endl << "---------------- ON ------------------ " << std::endl;
		pOperator->SetState(pTurnOnState);
		pOperator->OnAction(eRPRunning);
		pOperator->OnAction(eTurnOff);
		pOperator->OnAction(eTurnOn);

		// RP RUNNING 일때
		std::cout << std::endl << "---------------- RP RUNNING ------------------ " << std::endl;
		pOperator->SetState(pRpRunningState);
		pOperator->OnAction(eRPRunning);
		pOperator->OnAction(eTurnOff);
		pOperator->OnAction(eTurnOn);
	}
	delete pTurnOnState;
	delete pTurnOffState;
	delete pRpRunningState;


	return 0;
}