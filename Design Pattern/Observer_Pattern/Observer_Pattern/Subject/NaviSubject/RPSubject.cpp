//
//  RPSubject.cpp
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 21..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#include "RPSubject.hpp"

CRPSubject::CRPSubject()
{
    
}

CRPSubject::~CRPSubject()
{
    
}

void CRPSubject::Notify()
{
    std::vector< CObserver* >::iterator iter ;
    for(iter = m_vtObserverList.begin(); iter != m_vtObserverList.end(); iter++)
    {
        (*iter)->Update();
    }
}
