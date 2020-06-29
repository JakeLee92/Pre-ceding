#include "Store.h"
#include "../Expression.h"

static CStore *m_storeInstance = nullptr;

CStore * CStore::GetInstacne()
{
	if (m_storeInstance == nullptr)
	{
		m_storeInstance = new CStore();
	}

	return m_storeInstance;
}

void CStore::DestroyInstance()
{
	if (m_storeInstance)
	{
		delete m_storeInstance;
		m_storeInstance = nullptr;
	}

}

CModule * CStore::BuyAudio(Vendor _vendor)
{
	return m_audioFactory.CreatoreAudioModule(_vendor);
}

CModule * CStore::BuyVideo(Vendor _vendor)
{
	return m_videoFactory.CreatoreAudioModule(_vendor);
}

CModule * CStore::BuyNavi(Vendor _vendor)
{
	return m_NaviFactory.CreatoreNaviModule(_vendor);
}

void CStore::UseKiosk(std::string context)
{
	ExpressionRet ret = m_kiosk.Proc(context);


	if (ret.m_method == eBuy)
	{

		for (int i = 0; i < ret.m_howmuch; i++)
		{
			if (ret.m_vendor == eMobis)
			{
				m_NaviFactory.CreatoreNaviModule(Vendor::eMobis);
				m_audioFactory.CreatoreAudioModule(Vendor::eMobis);
				m_videoFactory.CreatoreAudioModule(Vendor::eMobis);
			}
			else if (ret.m_vendor == eExLg)
			{
				m_NaviFactory.CreatoreNaviModule(Vendor::eLG);
				m_audioFactory.CreatoreAudioModule(Vendor::eLG);
				m_videoFactory.CreatoreAudioModule(Vendor::eLG);
			}
		}
	}
	
}

CStore::CStore()
{




}
