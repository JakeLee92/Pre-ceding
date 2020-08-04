#ifndef _VENODOR_EXPRESSION_H__
#define _VENODOR_EXPRESSION_H__
#include "Expression.h"

class CVendorExpression : public CExpression
{

public:
	void Interpret(std::string context, ExpressionRet &ret) override;

};

#endif // _VENODOR_EXPRESSION_H__
