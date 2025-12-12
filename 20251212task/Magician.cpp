#include "Magician.h"
#include <iostream>
using namespace std;

// Magician 클래스의 생성자 구현
Magician::Magician(string Nickname): Player(Nickname)
{
	JobName = "마법사";
	HP = 80;
	MP = 120;
	Power = 25;
	Defence = 5;
	Accuracy = 85;
	Speed = 12;
}

// Magician 클래스의 공격 함수 구현
void Magician::Attack() 
{
	cout << "[마법사] "<< Nickname << "님의 마법 공격!\n";
}