#ifndef __MODULECPU_H__
#define __MODULECPU_H__

#include <string>

class CModuleCpu
{
public :
	virtual int CheckCpu() = 0;

	std::string GetModuleName() { return m_strModuleName; }

protected:
	int m_iMemory;
	int m_iCpu;

	std::string m_strModuleName;
};


#endif