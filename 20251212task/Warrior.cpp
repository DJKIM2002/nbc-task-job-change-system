#include "Warrior.h"
#include <iostream>
using namespace std;

// Warrior 클래스의 생성자 구현
Warrior::Warrior(string nickname): Player(nickname) 
{
	JobName = "전사";
	HP = 150;
	MP = 30;
	Power = 20;
	Defence = 10;
	Accuracy = 70;
	Speed = 15;
}

// Warrior 클래스의 공격 함수 구현
void Warrior::Attack() {
	cout << "[전사] "<< Nickname << "님의 검 휘두르기 공격!" << endl;
}