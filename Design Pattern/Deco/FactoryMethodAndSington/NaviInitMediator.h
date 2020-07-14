#ifndef _NAVI_INIT_MEDIATORY_H__
#define _NAVI_INIT_MEDIATORY_H__ 

#include "InitMediator.h"
#include <vector>

class CModuleItem;
class CNaviInitMediator : public CInitMediator
{
public :
	CNaviInitMediator();
	virtual ~CNaviInitMediator();

public :
	std::vector<CModuleItem*> m_vtModuleItem;

public:
	virtual bool StartInitialize() override;

};


#endif
