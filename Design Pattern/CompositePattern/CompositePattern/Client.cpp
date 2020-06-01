#include <iostream>
#include "NaviMemory.h"

#include "MapDisplayMemory.h"
#include "RoutePlanningMemory.h"
#include "SearchMemory.h"


int main()
{
	CNaviMemory NaviMem;

	NaviMem.AddModuleMemory(new CMapDisplayMemory(100, 70));
	NaviMem.AddModuleMemory(new CRoutePlanningMemory(140, 90));
	NaviMem.AddModuleMemory(new CSearchMemory(10, 30));

	int iCpu = NaviMem.CheckCpu();
	int iMem = NaviMem.CheckMemory();

	int iMaxCpu = NaviMem.CheckMaxCpu();
	int iMaxMem = NaviMem.CheckMaxMemory();

	NaviMem.ClearModule();


	return 0;
}
