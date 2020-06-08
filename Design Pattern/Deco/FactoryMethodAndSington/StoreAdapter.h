#ifndef __STORE_ADAPTER_H__
#define __STORE_ADAPTER_H__

#include "Store/Store.h"

enum eCurrency
{
	eWon,
	eDoller,
	eEuro
};

class StoreAdapter
{
	

public:
	StoreAdapter();
	~StoreAdapter();

	CModule* BuyAudio(Vendor _vendor , eCurrency _eCurrency);
	CModule* BuyVideo(Vendor _vendor, eCurrency _eCurrency);


private:
	CStore* m_pStore;

};


#endif
