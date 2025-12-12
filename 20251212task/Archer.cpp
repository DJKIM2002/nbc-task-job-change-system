#include "Archer.h"
#include <iostream>
using namespace std;

// Archer 클래스의 생성자 구현
Archer::Archer(string Nickname): Player(Nickname)
{
	JobName = "궁수";
	HP = 90;
	MP = 60;
	Power = 18;
	Defence = 7;
	Accuracy = 90;
	Speed = 20;
}

// Archer 클래스의 공격 함수 구현
void Archer::Attack()
{
	cout << "[궁수] " << Nickname << "님의 화살 공격!\n";
}