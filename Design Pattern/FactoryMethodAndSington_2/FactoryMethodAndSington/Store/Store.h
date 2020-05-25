#ifndef __STORE_H__
#define __STORE_H__

#include "../AudioFactory.h"
#include "../VideoFactory.h"

class CStore
{
public :
	static CStore*	GetInstacne();
	static void		DestroyInstance();
	
	CModule* BuyAudio(Vendor _vendor);
	CModule* BuyVideo(Vendor _vendor);

private:
	CStore();
	
	
	CAudioFactory m_audioFactory;
	CVideoFactory m_videoFactory;

};

#endif // !__STORE_H__
