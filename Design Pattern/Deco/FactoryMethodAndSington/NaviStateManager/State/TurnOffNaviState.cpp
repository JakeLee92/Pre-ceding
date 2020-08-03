#include "TurnOffNaviState.h"
#include <iostream>

CTurnOffNaviState::CTurnOffNaviState()
{

}

CTurnOffNaviState::~CTurnOffNaviState()
{

}

void CTurnOffNaviState::TurnOn()
{
	std::cout << "Turn On !!" << std::endl;
}

void CTurnOffNaviState::TurnOff()
{
	std::cout << "Nothing !!" << std::endl;
}

void CTurnOffNaviState::RPRunning()
{
	std::cout << "Nothing !!" << std::endl;
}

