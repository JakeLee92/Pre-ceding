#include "StoreAdapter.h"
#include <iostream>


StoreAdapter::StoreAdapter()
{

	m_pStore = CStore::GetInstacne();

}


StoreAdapter::~StoreAdapter()
{
	if (m_pStore)
		CStore::DestroyInstance();
}

CModule * StoreAdapter::BuyAudio(Vendor _vendor, eCurrency _eCurrency)
{

	CModule* pModule = m_pStore->BuyAudio(_vendor);

	
	switch (_eCurrency)
	{
	case eWon:
		std::cout << "Currency is WON" << std::endl;
		break;
	case eDoller:
		std::cout << "Currency is Doller" << std::endl;
		break;
	case eEuro:
		std::cout << "Currency is Euro" << std::endl;
		break;
	default:
		break;
	}

	if (pModule)
		pModule->Play();


	return pModule;
}

CModule * StoreAdapter::BuyVideo(Vendor _vendor, eCurrency _eCurrency)
{

	CModule* pModule = m_pStore->BuyVideo(_vendor);
	
	switch (_eCurrency)
	{
	case eWon:
		std::cout << "Currency is WON" << std::endl;
		break;
	case eDoller:
		std::cout << "Currency is Doller" << std::endl;
		break;
	case eEuro:
		std::cout << "Currency is Euro" << std::endl;
		break;
	default:
		break;
	}

	if (pModule)
		pModule->Play();

	return pModule;
}

void StoreAdapter::UseKiosk(std::string context)
{
	m_pStore->UseKiosk(context);
}
