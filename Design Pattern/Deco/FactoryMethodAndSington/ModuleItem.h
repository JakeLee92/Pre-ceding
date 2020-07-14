#ifndef __MODULE_ITEM_H__
#define __MODULE_ITEM_H__ 

#include "InitMediator.h"

class CModuleItem
{
public:
	virtual void InitModuleItem();

	void SetMediator(CInitMediator *_mediator);

protected:
	CInitMediator *m_mediator;

};



#endif
