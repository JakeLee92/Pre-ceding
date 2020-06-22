#include <iostream>
#include "StoreAdapter.h"
#include "AVNServiceFacade.h"

int main()
{
	// CREATE SINGLETON 
	StoreAdapter Store;
	CAVNServiceFacade facade;

	facade.SetNaviModuleL(new CNaviModuleLG());

	facade.DrawNaviLG(1);
	facade.DrawNaviLG(2);
	facade.DrawNaviLG(3);
	facade.DrawNaviLG(4);
	facade.DrawNaviLG(1);
	facade.DrawNaviLG(4);
	facade.DrawNaviLG(5);
	facade.DrawNaviLG(13);
	facade.DrawNaviLG(14);
	facade.DrawNaviLG(54);
	facade.DrawNaviLG(66);
	facade.DrawNaviLG(76);
	facade.DrawNaviLG(31);



	return 0;
}