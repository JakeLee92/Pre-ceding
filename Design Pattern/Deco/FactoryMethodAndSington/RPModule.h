#ifndef __RPMODULE_H__
#define __RPMODULE_H__ 

#include "ModuleItem.h"
#include <iostream>
class CRPModule : public CModuleItem
{
public:
	CRPModule();
	virtual ~CRPModule();


protected:
	virtual void InitModuleItem() override
	{
		std::cout << "RP MOUDEL INIT " << std::endl;

		if (m_mediator)
		{
			std::string str;
			str = "[SEND MSG] SUCC RP";
			m_mediator->ReceveString(str);
		}
	}

};

CRPModule::CRPModule()
{

}

CRPModule::~CRPModule()
{

}

#endif
