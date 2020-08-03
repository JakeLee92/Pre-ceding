#ifndef __RPRUNNING_NAVI_STATE_H__
#define __RPRUNNING_NAVI_STATE_H__

#include "NaviState.h"

class CRPRunningNaviState : public CNaviState
{
public :
	CRPRunningNaviState();
	~CRPRunningNaviState();
public:
	void TurnOn() override;


	void TurnOff() override;


	void RPRunning() override;

};

#endif
