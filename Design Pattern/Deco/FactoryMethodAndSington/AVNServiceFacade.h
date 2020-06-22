#ifndef __AVN_SERVICE_FACADE_H__
#define __AVN_SERVICE_FACADE_H__

#include "VideoModuleMobis.h"
#include "VideoModuleLG.h"
#include "AudioModeMobis.h"
#include "AudioModuleLG.h"
#include "NaviModuleMobis.h"
#include "NaviModuleLG.h"


class CAVNServiceFacade
{
public:
	CAVNServiceFacade();

	void PlayVideoMobis();
	void PlayVideoLG();

	void PlayAudioMobis();
	void PlayAudioLG();

	void PlayNaviMobis();
	void PlayNaviLG();

	void DrawNaviMobis(int _iSession);
	void DrawNaviLG(int _iSession);

private:
	CVideoModuleMobis*	m_pVideoModuleM;
	CVideoModuleLG*		m_pVideoModuleL;
	CAudioModuleMobis*	m_pAudioModuleM;
	CAudioModuleLG*		m_pAudioModuleL;
	CNaviModuleMobis*	m_pNaviModuleM;
	CNaviModuleLG*		m_pNaviModuleL;
	
	

	

public:
	const CVideoModuleMobis* GetVideoModuleM() const { return m_pVideoModuleM; }
	void SetVideoModuleM(CVideoModuleMobis* val) { m_pVideoModuleM = val; }

	const CVideoModuleLG* GetVideoModuleL() const { return m_pVideoModuleL; }
	void SetVideoModuleL(CVideoModuleLG* val) { m_pVideoModuleL = val; }

	const CAudioModuleMobis* GetAudioModuleM() const { return m_pAudioModuleM; }
	void SetAudioModuleM(CAudioModuleMobis* val) { m_pAudioModuleM = val; }

	const CAudioModuleLG* GetAudioModuleL() const { return m_pAudioModuleL; }
	void SetAudioModuleL(CAudioModuleLG* val) { m_pAudioModuleL = val; }

	const CNaviModuleMobis* GetNaviModuleM() const { return m_pNaviModuleM; }
	void SetNaviModuleM(CNaviModuleMobis* val) { m_pNaviModuleM = val; }

	const CNaviModuleLG* GetNaviModuleL() const { return m_pNaviModuleL; }
	void SetNaviModuleL(CNaviModuleLG* val) { m_pNaviModuleL = val; }
};


#endif // __AVN_SERVICE_FACADE_H__