#ifndef __NAVI_STATE_MANAGER_H__
#define __NAVI_STATE_MANAGER_H__
#include "State/NaviState.h"

enum eActionType
{
	eTurnOn,
	eTurnOff,
	eRPRunning
};

class CNaviOperator
{
private:
	CNaviOperator();
	~CNaviOperator();

public:
	static CNaviOperator* GetInstance();
	static void DestoryInstance();

	void SetState(CNaviState* _pState);
	void OnAction(eActionType _eType);

private:
	CNaviState* m_pNaviState;
};

#endif 
