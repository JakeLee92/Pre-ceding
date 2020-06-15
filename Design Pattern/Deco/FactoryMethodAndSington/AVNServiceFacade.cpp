#include "AVNServiceFacade.h"
#include <iostream>

CAVNServiceFacade::CAVNServiceFacade()
{
	m_pVideoModuleM =  NULL;
	m_pVideoModuleL = NULL;
	m_pAudioModuleM = NULL;
	m_pAudioModuleL = NULL;
	m_pNaviModuleM = NULL;
	m_pNaviModuleL = NULL;
}

void CAVNServiceFacade::PlayVideoMobis()
{
	if (m_pVideoModuleM)
	{
		m_pVideoModuleM->PlayVideoMobis();
	}
	else
	{
		std::cout << "Do not Exist Video Mobis" << std::endl;
	}
}

void CAVNServiceFacade::PlayVideoLG()
{
	if (m_pVideoModuleL)
	{
		m_pVideoModuleL->PlayVideoLG();
	}
	else
	{
		std::cout << "Do not Exist Video LG" << std::endl;
	}
}

void CAVNServiceFacade::PlayAudioMobis()
{
	if (m_pAudioModuleM)
	{
		m_pAudioModuleM->PlayAudioMobis();
	}
	else
	{
		std::cout << "Do not Exist Audio Mobis" << std::endl;
	}
}

void CAVNServiceFacade::PlayAudioLG()
{
	if (m_pAudioModuleL)
	{
		m_pAudioModuleL->PlayAudioLG();
	}
	else
	{
		std::cout << "Do not Exist Audio LG" << std::endl;
	}
}

void CAVNServiceFacade::PlayNaviMobis()
{
	if (m_pNaviModuleM)
	{
		m_pNaviModuleM->PlayNaviMobis();
	}
	else
	{
		std::cout << "Do not Exist Navi Mobis" << std::endl;
	}
}

void CAVNServiceFacade::PlayNaviLG()
{
	if (m_pNaviModuleL)
	{
		m_pNaviModuleL->PlayNaviLG();
	}
	else
	{
		std::cout << "Do not Exist Navi LG" << std::endl;
	}
}

