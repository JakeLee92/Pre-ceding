#ifndef __CDRAW_CACHE_H__
#define __CDRAW_CACHE_H__


#include <vcruntime_string.h>
#include <vector>
#include "CDrawer.h"
#include "DrawerMD.h"

struct stBuilding
{
	int m_iSessionNum;
	int m_arrVertex[256];
	int m_iBuildingType;

	stBuilding()
	{
		memset(this, 0x00, sizeof(this));
	}
};

class CDrawCache : public CDrawer
{
public:
	CDrawCache();
	~CDrawCache();

	void CacheLimitSize(int _size);

	virtual void DoDraw();

	stBuilding FindInCahce(int _iSession);
	void InsertToCache(stBuilding _stBuilding);

private:
	int m_ilimitSize;
	std::vector<stBuilding> m_BuildingCache;

	CDrawMD m_DrawMD;
};

#endif
