#ifndef __TURNON_NAVI_STATE_H__
#define __TURNON_NAVI_STATE_H__

#include "NaviState.h"

class CTurnOnNaviState : public CNaviState
{
public:
	CTurnOnNaviState();
	~CTurnOnNaviState();
public:
	void TurnOn() override;


	void TurnOff() override;


	void RPRunning() override;

};

#endif
