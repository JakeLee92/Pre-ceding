#ifndef __BUY_EXPRESSION_H__
#define __BUY_EXPRESSION_H__
#include "Expression.h"

class CBuyExpression : public CExpression
{
public :


public:
	void Interpret(std::string context, ExpressionRet &ret) override;

};

#endif // __BUY_EXPRESSION_H__
