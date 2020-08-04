//
//  MDSubject.cpp
//  Observer_Pattern
//
//  Created by INGYU LEE on Reiwa 17. 7. 21..
//  Copyright © 2 Reiwa INGYU LEE. All rights reserved.
//

#include "MDSubject.hpp"
#include <iostream>

CMDSubject::CMDSubject()
{
    
}

CMDSubject::~CMDSubject()
{
    
}

void CMDSubject::Notify()
{
    
}

void CMDSubject::Action()
{
    std::cout<< "[MD] Drawing Thread Stop" << std::endl;
}
