//
//  RPSubject.hpp
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 21..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#ifndef RPSubject_hpp
#define RPSubject_hpp

#include "../Subject.hpp"


class CRPSubject : public CSubject
{
public :
    CRPSubject();
    virtual ~CRPSubject();
    
    virtual void Notify();
    
};

#endif /* RPSubject_hpp */
