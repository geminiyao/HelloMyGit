#include <string>
#include "CObject.h"

class CNameValue
{
public:
	//CNameValue()
	//{
		//std::cout << "CNameValue" << std::endl;
	//}
	~CNameValue()
	{
		std::cout << "~CNameValue" << std::endl;
	}
	CNameValue(CObject& obj)
	{
		std::cout << "CNameValue param" << std::endl;
	}
	//CNameValue(const CNameValue& nameValue)
	//{
	//	std::cout << "CNameValue  Copy" << std::endl;
	//	//return *this;
	//}
	//CNameValue(CNameValue& cname){}
private:
	CObject m_Object;
};