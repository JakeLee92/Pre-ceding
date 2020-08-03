#include "RpRunningNaviState.h"
#include <iostream>

CRPRunningNaviState::CRPRunningNaviState()
{

}

CRPRunningNaviState::~CRPRunningNaviState()
{

}

void CRPRunningNaviState::TurnOn()
{
	std::cout << "Already Turn On the NAVI " << std::endl;
}

void CRPRunningNaviState::TurnOff()
{
	std::cout << "RPRunning !! Can not Turn off !!" << std::endl;
}

void CRPRunningNaviState::RPRunning()
{
	std::cout << "Already RPRunning!!" << std::endl;
}

