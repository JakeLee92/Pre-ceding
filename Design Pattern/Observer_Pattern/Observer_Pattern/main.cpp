#include <iostream>

#include "Observer/NaviObserver/RPRunningObserver.h"

#include "Subject/NaviSubject/RPSubject.hpp"
#include "Subject/NaviSubject/ISSubject.hpp"
#include "Subject/NaviSubject/MDSubject.hpp"

int main()
{
    
    CRPRunningObserver *pOp = new CRPRunningObserver();
    
    CRPSubject *pRP = new CRPSubject();
    CISSubject *pIS = new CISSubject();
    CMDSubject *pMD = new CMDSubject();
    
    pRP->RegistObserver(pOp) ;
    
    pOp->RegistSubject(pIS) ;
    pOp->RegistSubject(pMD) ;
    
    pRP->Notify();
    
    
    
    return 0;
}

