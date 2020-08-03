#ifndef __TURNOFF_NAVI_STATE_H__
#define __TURNOFF_NAVI_STATE_H__

#include "NaviState.h"

class CTurnOffNaviState : public CNaviState
{
public:
	CTurnOffNaviState();
	~CTurnOffNaviState();
public:
	void TurnOn() override;


	void TurnOff() override;


	void RPRunning() override;

};

#endif
