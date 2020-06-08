#ifndef __Videio_Module_Mobis_h__
#define __Videio_Module_Mobis_h__

#include "Module.h"

class CVideoModuleMobis : public CModule
{
public:
	CVideoModuleMobis();


	// Inherited via CModule
	virtual void Play() override;

};

#endif