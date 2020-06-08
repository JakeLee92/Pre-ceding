#ifndef __MODULEMEMORY_H__
#define __MODULEMEMORY_H__

#include <string>

class CModuleMemory
{
public :
	virtual int CheckMemory() = 0;

	std::string GetModuleName() { return m_strModuleName; }

protected:
	int m_iMemory;
	int m_iCpu;

	std::string m_strModuleName;
};


#endif