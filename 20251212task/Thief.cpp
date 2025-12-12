#include "Thief.h"
#include "Monster.h"
#include <iostream>
#include <string>
#include <cmath>
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
	cout << "[" << JobName << "] "<< Nickname << "님의 단검 베기 공격!\n";
}

// Thief 클래스의 몬스터 공격 함수 구현
void Thief::Attack(Monster* Monster)
{
	int Damage = static_cast<int>(floor(( Power - Monster->GetDefence() ) / 5.0));
	if(Damage <= 0) {
		Damage = 1;
	}
	cout << "[" << JobName << "] "<< Nickname << "님이 " << Monster->GetName() << "에게 단검 베기 공격!\n";
	for(int i = 0; i < 5; i++) {
		cout << "* " << Monster->GetName() << "에게 단검으로 " << Damage << "의 피해를 입혔다!\n";
	}
	Monster->SetHP(Monster->GetHP() - Damage * 5);
	if(Monster->GetHP() > 0) {
		cout << Monster->GetName() << "의 남은 HP : " << Monster->GetHP() << "\n";
	} else {
		cout << "[" << JobName << "] "<< Nickname << "님의 승리! " << Monster->GetName() << "을(를) 물리쳤다!\n";
	}
}
