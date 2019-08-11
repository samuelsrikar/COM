#include "Library.h"
#include<Windows.h>


#define TRACE OutputDebugString

struct Hen :IHen 
{
	unsigned int m_count;

	Hen():m_count(0)
	{
		TRACE(L"Cheep!\n");
	}

	~Hen()
	{
		TRACE(L"Chicken soup!\n");
	}

	void __stdcall Cluck()
	{
		TRACE(L"Cluck!\n");
	}

	void _stdcall Roost()
	{
		TRACE(L"Roost!\n");
	}

	void _stdcall AddRef()
	{
		++m_count;
	}

	void _stdcall Release()
	{
		if (0 == --m_count)
		{
			delete this;
		}
	}
};

IHen* _stdcall CreateHen()
{
	return new Hen;
}