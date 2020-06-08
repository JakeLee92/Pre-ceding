#include "Store.h"

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

CStore::CStore()
{




}
