#ifndef _HOW_MUCH_EXPRESSION_H__
#define _HOW_MUCH_EXPRESSION_H__
#include "Expression.h"

class CHowMuchExpression : public CExpression
{

public:
	void Interpret(std::string context, ExpressionRet &ret) override;

};

#endif // _HOW_MUCH_EXPRESSION_H__
