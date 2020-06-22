#include "CDrawCache.h"



CDrawCache::CDrawCache()
{
	m_ilimitSize = 10;
	
}


CDrawCache::~CDrawCache()
{
}

void CDrawCache::CacheLimitSize(int _size)
{
	m_ilimitSize = _size;
}

stBuilding CDrawCache::FindInCahce(int _iSesseion)
{
	std::vector<stBuilding>::iterator vtIter;

	for (vtIter = m_BuildingCache.begin(); vtIter != m_BuildingCache.end(); vtIter++)
	{
		if (_iSesseion == (*vtIter).m_iSessionNum)
			return (*vtIter);
	}

	return stBuilding();
}

void CDrawCache::InsertToCache(stBuilding _stBuilding)
{
	if (m_BuildingCache.size() >= m_ilimitSize )
	{	
		m_BuildingCache.erase(m_BuildingCache.begin());
	}

	m_BuildingCache.push_back(_stBuilding);
}
