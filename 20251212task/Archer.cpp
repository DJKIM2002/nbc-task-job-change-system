#include "Archer.h"
#include "Monster.h"
#include <iostream>
#include <string>
#include <cmath>
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

// Archer 클래스의 몬스터 공격 함수 구현
void Archer::Attack(Monster* Monster)
{
	int Damage = static_cast<int>(floor(( Power - Monster->GetDefence() ) / 3.0));
	if(Damage <= 0) {
		Damage = 1;
	}
	cout << "[" << JobName << "] "<< Nickname << "님이 " << Monster->GetName() << "에게 화살 공격!\n";
	for(int i = 0; i < 3; i++) {
		cout << "* " << Monster->GetName() << "에게 화살로 " << Damage << "의 피해를 입혔다!\n";
	}
	Monster->SetHP(Monster->GetHP() - Damage * 3);
	if(Monster->GetHP() > 0) {
		cout << Monster->GetName() << "의 남은 HP : " << Monster->GetHP() << "\n";
	} else {
		cout << "[" << JobName << "] "<< Nickname << "님의 승리! " << Monster->GetName() << "을(를) 물리쳤다!\n";
	}
}