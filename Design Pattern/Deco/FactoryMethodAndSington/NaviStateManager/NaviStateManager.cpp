#include "NaviStateManager.h"

static CNaviOperator* m_pNaviStateManager = nullptr;

CNaviOperator::CNaviOperator() : m_pNaviState(nullptr)
{

}

CNaviOperator::~CNaviOperator()
{
	
}

CNaviOperator* CNaviOperator::GetInstance()
{
	if (m_pNaviStateManager == nullptr)
		m_pNaviStateManager = new CNaviOperator();

	return m_pNaviStateManager;
}

void CNaviOperator::DestoryInstance()
{
	if (m_pNaviStateManager)
	{
		delete m_pNaviStateManager;
		m_pNaviStateManager = nullptr;
	}
}

void CNaviOperator::SetState(CNaviState* _pState)
{
	if (_pState)
	{
		m_pNaviState = _pState;
	}
}

void CNaviOperator::OnAction(eActionType _eType)
{
	if (m_pNaviState)
	{
		switch (_eType)
		{
		case eTurnOn:
			m_pNaviState->TurnOn();
			break;
		case eTurnOff:
			m_pNaviState->TurnOff();
			break;
		case eRPRunning:
			m_pNaviState->RPRunning();
			break;
		default:
			break;
		}
	}
}

