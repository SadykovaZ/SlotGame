#pragma once
#include"SlotGame.h"
#include<Windows.h>
class SlotMachineConsole
{
	SlotGame game;
public:
	SlotMachineConsole();
	void start();
private:
	void printScreen() const;
	void printMenu() const;
	void choose(int ch);

};

