#include "InitMediator.h"
#include <iostream>

CInitMediator::CInitMediator()
{

}

CInitMediator::~CInitMediator()
{

}

bool CInitMediator::StartInitialize()
{


	return true;
}

void CInitMediator::ReceveString(std::string _str)
{
	std::cout << _str << std::endl;
}

