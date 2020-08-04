//
//  Subject.cpp
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 21..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#include "Subject.hpp"

CSubject::CSubject()
{
    m_vtObserverList.clear();
}

CSubject::~CSubject()
{
    
}

void CSubject::Notify()
{
    
}

void CSubject::Action()
{
    
}


void CSubject::RegistObserver(CObserver *_observer)
{
    if(_observer != nullptr)
    {
        m_vtObserverList.push_back(_observer) ;
    }
}
void CSubject::RemoveObserver(CObserver *_observer)
{
    std::vector< CObserver* >::iterator iter ;
    for(iter = m_vtObserverList.begin(); iter != m_vtObserverList.end(); iter++)
    {
        if((*iter) == _observer)
        {
            m_vtObserverList.erase(iter);
            break;
        }
    }
}
