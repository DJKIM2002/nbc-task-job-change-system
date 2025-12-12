#include "Thief.h"
#include <iostream>
using namespace std;

// Thief 클래스의 생성자 구현
Thief::Thief(string Nickname): Player(Nickname)
{
	JobName = "도적";
	HP = 100;
	MP = 70;
	Power = 15;
	Defence = 6;
	Accuracy = 88;
	Speed = 25;
}

// Thief 클래스의 공격 함수 구현
void Thief::Attack()
{
	cout << "[도적] "<< Nickname << "님의 단검 베기 공격!\n";
}
