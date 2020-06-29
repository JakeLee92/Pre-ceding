#include <iostream>
#ifndef _DRAW_MD_H__
#define _DRAW_MD_H__

class CDrawMD : public CDrawer
{

public : 
	virtual void DoDraw() override
	{
		std::cout << "Draw MD : DoDraw()" << std::endl;
	}

};

#endif // !_DRAW_MD_H__
