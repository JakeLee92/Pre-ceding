//
//  ISSubject.hpp
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 21..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#ifndef ISSubject_hpp
#define ISSubject_hpp

#include "Subject.hpp"

class CISSubject : public CSubject
{
public :
    CISSubject();
    virtual ~CISSubject();
    
public:
    virtual void Notify();
    virtual void Action();
};

#endif /* ISSubject_hpp */
