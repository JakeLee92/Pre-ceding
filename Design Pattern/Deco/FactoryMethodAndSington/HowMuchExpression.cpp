#include "HowMuchExpression.h"
#include <string>
#include <iostream>

void CHowMuchExpression::Interpret(std::string context, ExpressionRet &ret)
{
	for (int i = 0; i < context.size(); i++)
	{
		if (context.at(i) >= '0' && context.at(i) <= '9')
		{
			std::cout << "How Much :" << context.at(i) << std::endl;
			ret.m_howmuch = context.at(i) - '0';


			return;
		}
	}
}

