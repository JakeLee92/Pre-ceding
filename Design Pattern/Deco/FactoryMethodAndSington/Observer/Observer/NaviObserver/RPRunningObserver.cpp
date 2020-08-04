//
//  NaviObserver.cpp
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 20..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#include "RPRunningObserver.h"

CRPRunningObserver::CRPRunningObserver()
{
    
}

CRPRunningObserver::~CRPRunningObserver()
{

}


void CRPRunningObserver::Update()
{

	std::vector< CSubject* >::iterator iter;
	for (iter = m_vtSubject.begin(); iter != m_vtSubject.end(); iter++)
	{
		CSubject* pSub = (*iter);
		pSub->Action();
	}

}