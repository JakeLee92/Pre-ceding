//
//  Observer.h
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 20..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#ifndef Observer_h
#define Observer_h

#include <vector>
#include "../../../Deco/FactoryMethodAndSington/Observer/Subject/Subject.hpp"


class CObserver
{
public :
    CObserver();
    virtual ~CObserver();
    
    void RegistSubject(CSubject* _pSubject);
    void RemoveSubject(CSubject* _pSubject);
    
public:
    void Update();
    
private:
    std::vector< CSubject* > m_vtSubject;
    
};


#endif /* Observer_h */
