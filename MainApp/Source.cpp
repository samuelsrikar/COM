#include "Library.h"

int main()
{
	auto pHen = CreateHen();

	pHen->AddRef();

	pHen->Cluck();
	{
		auto pHen2 = pHen;
		pHen2->AddRef();
		pHen2->Roost();
		pHen2->Release();
	}
	
	pHen->Release();

	return 0;
}