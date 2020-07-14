#ifndef __ISMODULE_H__
#define __ISMODULE_H__ 

#include <iostream>
#include "ModuleItem.h"
class CISModule : public CModuleItem
{
public :
	CISModule();
	virtual ~CISModule();


protected:
	virtual void InitModuleItem() override
	{
		std::cout << "IS MOUDEL INIT " << std::endl;
		if (m_mediator)
		{
			std::string str;
			str = "[SEND MSG] SUCC IS";
			m_mediator->ReceveString(str);
		}
	}

};

CISModule::CISModule()
{

}

CISModule::~CISModule()
{

}

#endif
