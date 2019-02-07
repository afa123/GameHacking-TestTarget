#include <Windows.h>
#include <iostream>

using std::cout;
using std::endl;

void FuncA()
{
	cout << "I'm function a!" << endl;
}

void FuncB(const char * string)
{
	cout << string << endl;
}

int main()
{
	while (true)
	{                    // 1 Key
		if (GetAsyncKeyState(0x31) & 1)
		{
			FuncA();
			FuncB("I'm function b!");
		}
	}
	return 0;
}