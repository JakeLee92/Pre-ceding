#include "Kiosk.h"
#include "Expression.h"
#include "HowMuchExpression.h"
#include "VendorExpression.h"
#include "BuyExpression.h"

ExpressionRet CKiosk::Proc(std::string context)
{
	CExpression *VendorhEx = new CVendorExpression();
	CExpression *BuyEx = new CBuyExpression();
	CExpression *HowMuchEx = new CHowMuchExpression();

	ExpressionRet ret;

	VendorhEx->Interpret(context, ret);
	BuyEx->Interpret(context, ret);
	HowMuchEx->Interpret(context, ret);

	return ret;

}

