#ifndef __Videio_Module_LG_h__
#define __Videio_Module_LG_h__

#include "Module.h"

class CVideoModuleLG : public CModule
{
public :
	CVideoModuleLG();


	// Inherited via CModule
	virtual void Play() override;

};

#endif