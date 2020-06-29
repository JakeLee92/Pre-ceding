#include "BuyExpression.h"
#include <iostream>

void CBuyExpression::Interpret(std::string context, ExpressionRet &ret)
{
	if (context.find("Buy") != -1)
	{
		std::cout << "Method : Buy" << std::endl;
		ret.m_method = eBuy;
	}
	else if (context.find("Sell") != -1)
	{
		std::cout << "Method : Sell" << std::endl;
		ret.m_method = eCell;
	}
}

