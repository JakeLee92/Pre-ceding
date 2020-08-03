#ifndef __NAVI_STATE_H__
#define __NAVI_STATE_H__

class CNaviState
{
public :
	CNaviState();
	~CNaviState();

	virtual void TurnOn();
	virtual void TurnOff();
	virtual void RPRunning();
	
};

#endif
