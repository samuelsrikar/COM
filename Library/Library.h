#pragma once

struct IHen
{
	virtual void __stdcall Cluck() = 0;
	virtual void __stdcall Roost() = 0;

	virtual void _stdcall AddRef() = 0;
	virtual void _stdcall Release() = 0;
};

IHen* __stdcall CreateHen();