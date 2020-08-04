//
//  Subject.hpp
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 21..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#ifndef Subject_hpp
#define Subject_hpp

#include "../Observer/Observer.h"

class CObserver;
class CSubject
{
public:
    CSubject();
    virtual ~CSubject();
    
public:
    void RegistObserver(CObserver *_observer);
    void RemoveObserver(CObserver *_observer);
    
    virtual void Notify();
    virtual void Action();
    
    std::vector< CObserver* > m_vtObserverList ;
    
};

#endif /* Subject_hpp */
