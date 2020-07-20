#include "Observer.h"

CObserver::CObserver()
{
    m_vtSubject.clear();
}

CObserver::~CObserver()
{
    
}

void CObserver::Update()
{
    
    std::vector< CSubject* >::iterator iter;
    for(iter = m_vtSubject.begin(); iter != m_vtSubject.end(); iter++)
    {
        CSubject* pSub = (*iter);
        pSub->Action();
    }
    
}

void CObserver::RegistSubject(CSubject* _pSubject)
{
    if(_pSubject)
        m_vtSubject.push_back(_pSubject) ;
}

void CObserver::RemoveSubject(CSubject* _pSubject)
{
    std::vector< CSubject* >::iterator iter;
    for(iter = m_vtSubject.begin(); iter != m_vtSubject.end(); iter++)
    {
        if(_pSubject == (*iter))
        {
            m_vtSubject.erase(iter);
            break;
        }
    }
}
