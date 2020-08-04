#include "VendorExpression.h"
#include <string>
#include <iostream>

void CVendorExpression::Interpret(std::string context, ExpressionRet &ret)
{
	if (context.find("Mobis") != -1)
	{
		std::cout << "Vendor : Mobis" << std::endl;
		ret.m_vendor = eExMobis;
	}
	else if (context.find("Lg") != -1)
	{
		std::cout << "Vendor : Lg" << std::endl;
		ret.m_vendor = eExLg;
	}
}

