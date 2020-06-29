#include <iostream>
#include "StoreAdapter.h"
#include "AVNServiceFacade.h"

int main()
{
	// CREATE SINGLETON 
	StoreAdapter Store;
	
	Store.UseKiosk("Mobis 9 Buy");


	return 0;
}