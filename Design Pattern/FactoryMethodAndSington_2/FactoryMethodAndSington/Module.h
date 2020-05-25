#ifndef __Module_h__
#define __Module_h__

enum Vendor
{
	eMobis,
	eLG,
	eMax
};

class CModule
{
public:
	virtual void Play() = 0;

};


#endif