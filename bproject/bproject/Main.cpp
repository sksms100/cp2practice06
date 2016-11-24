#pragma once
/* chpater 10
#include <iostream>
#include <process.h>
#include <windows.h>
#include "MiniGame.cpp"
*/

#include "Frame.h"
using namespace std;

/*
unsigned int __stdcall mythread(void*)
{
	int i = 0;
	while (1)
	{
		cout << GetCurrentThreadId() << ": " << i++ << endl;
		Sleep(500);
	}
	return 0;
}
unsigned int __stdcall keyEvent(void*)
{
	KeyEvent k;
	int i;
	while (1)
	{
		i = k.getkey();
		switch (i)
		{
		case 37:
			cout << "Left key is pressed" << endl;
			break;
		case 38:
			cout << "Up key is pressed" << endl;
			break;
		case 39:
			cout << "Right key is pressed" << endl;
			break;
		case 40:
			cout << "Down key is pressed" << endl;
			break;
		}
	}
	return 0;
}
*/

/* MiniGame
Game* game = new Game();
unsigned int __stdcall mythread(void*)
{
	int i = 0;
	while (1)
	{
		game->move();
		Sleep(500);
	}
	return 0;
}
unsigned int __stdcall keyEvent(void*)
{
	KeyEvent k;
	int i;
	while (1)
	{
		i = k.getkey();
		if (i != -1)
			game->setDirection(i);
	}
	return 0;
}

int main()
{
	HANDLE handleA, handleB;

	handleA = (HANDLE)_beginthreadex(0, 0, &mythread, (void*)0, 0, 0);
	handleB = (HANDLE)_beginthreadex(0, 0, &keyEvent, (void*)0, 0, 0);

	WaitForSingleObject(handleA, INFINITE);
	WaitForSingleObject(handleB, INFINITE);

	CloseHandle(handleA);
	CloseHandle(handleB);
}
*/

void main() {
	try {
		Frame *f1 = new Frame;
		Frame *f2 = new Frame[10];

		delete f1;
		delete[] f2;
	}
	catch (string msg) {
		cout << "Error msg :" << msg << endl;
	}
}