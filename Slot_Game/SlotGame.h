#pragma once
#include"CQueue.h"
#include<string>
using namespace std;
class SlotGame
{
	CQueue<char> bar[3];
	int money;
	int bet;

public:
	SlotGame(int money, int bet=10);
	bool pushButton();
	void setBet(int bet);
	int getBet() const { return bet;}
	int getMoney() const {return money;}
	void addMoney(int money);
	string getStringResult() const;
private:
	void roll();
	int getCoef();	
};

