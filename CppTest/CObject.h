#include <iostream>

class CObject
{
public:
	CObject()
	{
		//std::cout << "CObject" << std::endl;
	}
	
	~CObject()
	{
		//std::cout << "~CObject" << std::endl;
	}
//private:
	CObject(const CObject& cobj)
	{
		std::cout << "CObject Copy" << std::endl;
	}
};