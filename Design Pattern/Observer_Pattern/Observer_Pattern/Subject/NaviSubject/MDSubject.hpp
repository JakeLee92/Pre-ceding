#include "../../../../Deco/FactoryMethodAndSington/Observer/Subject/Subject.hpp"
//
//  MDSubject.hpp
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 21..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#ifndef MDSubject_hpp
#define MDSubject_hpp



class CMDSubject : public CSubject
{
public:
    CMDSubject();
    virtual ~CMDSubject();
    
public:
    virtual void Notify();
    virtual void Action();
    
};
#endif /* MDSubject_hpp */
