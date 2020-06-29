#ifndef _EXPRESSION_H__
#define _EXPRESSION_H__

#include <String>
enum ExVendor
{
	eExMobis,
	eExLg,
};

enum ExMethod
{
	eBuy,
	eCell,
};

struct ExpressionRet
{
	ExVendor m_vendor;
	ExMethod m_method;
	
	int m_howmuch;
	
};


class CExpression
{

public:

	CExpression();
	virtual ~CExpression();

	virtual void Interpret(std::string context, ExpressionRet &ret) = 0;

};


#endif // _EXPRESSION_H__
