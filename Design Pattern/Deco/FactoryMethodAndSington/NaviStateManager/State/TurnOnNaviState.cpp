#include "TurnOnNaviState.h"
#include <iostream>

CTurnOnNaviState::CTurnOnNaviState()
{

}

CTurnOnNaviState::~CTurnOnNaviState()
{

}

void CTurnOnNaviState::TurnOn()
{
	std::cout << "Already TurnOn the NAVI " << std::endl;
}

void CTurnOnNaviState::TurnOff()
{
	std::cout << "Turn off !!" << std::endl;
}

void CTurnOnNaviState::RPRunning()
{
	std::cout << "Start to RP Running !!" << std::endl;
}

