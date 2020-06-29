#ifndef __STORE_H__
#define __STORE_H__

#include "../AudioFactory.h"
#include "../VideoFactory.h"
#include "../NaviFactory.h"
#include "../Kiosk.h"

class CStore
{
public :
	static CStore*	GetInstacne();
	static void		DestroyInstance();
	
	CModule* BuyAudio(Vendor _vendor);
	CModule* BuyVideo(Vendor _vendor);
	CModule* BuyNavi(Vendor _vendor);

	void UseKiosk(std::string context);

private:
	CStore();
	
	CKiosk			m_kiosk;
	CAudioFactory m_audioFactory;
	CVideoFactory m_videoFactory;
	CNaviFactory m_NaviFactory;

};

#endif // !__STORE_H__
