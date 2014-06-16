#include "CNameValue.h"

void main()
{
	CObject cObj;
	CNameValue nameValue(cObj);
	CNameValue nameValue1(nameValue);
	//delete nameValue;
}