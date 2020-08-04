//
//  ISSubject.cpp
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 21..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#include "ISSubject.hpp"
#include <iostream>

CISSubject::CISSubject()
{
    
}

CISSubject::~CISSubject()
{
    
}

void CISSubject::Notify()
{
    
}

void CISSubject::Action()
{
    std::cout<< "[IS] Search Thread Stop" << std::endl;
}
