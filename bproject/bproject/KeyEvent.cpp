#pragma once
#include <windows.h>
#include <iostream>
using namespace std;

class KeyEvent
{
private:
	HANDLE hin;
	COORD KeyWhere;
	DWORD EventCount;
	INPUT_RECORD InRec;
	DWORD NumRead;
	int downKey;
public:
	KeyEvent()
	{
		hin = GetStdHandle(STD_INPUT_HANDLE);
		EventCount = 1;
	}
	int getkey()
	{
		ReadConsoleInput(hin, &InRec, 1, &NumRead);
		if (InRec.EventType == KEY_EVENT)
		{
			if (InRec.Event.KeyEvent.bKeyDown)
			{
				downKey = InRec.Event.KeyEvent.wVirtualKeyCode;
				return downKey;
			}
			else
				return -1;
		}
		return -1;
	}
};