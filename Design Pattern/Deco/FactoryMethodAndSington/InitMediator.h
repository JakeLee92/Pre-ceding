#include <string>
#ifndef __INIT_MEDIATOR_H__
#define __INIT_MEDIATOR_H__

class CInitMediator
{
public :
	CInitMediator();
	virtual ~CInitMediator();

	virtual bool StartInitialize();
	virtual void ReceveString(std::string _str);
};

#endif
